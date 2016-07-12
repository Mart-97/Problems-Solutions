#include <stdio.h>
#include <cmath>
#define MAXN 100006
using namespace std;
int a,b,n,q;
int nums[MAXN];
int heap[300000];
int bitmask(int x,int y){
	return x | y;
}
int binario(int N){
	int acum = 0;
	while(N != 0){
		acum += (N%2);
		N = N/2;
	}
	return acum;
}
void build(int pos, int a,int b){
	if(a == b){
		heap[pos] = bitmask(0,1 << nums[a]);
	} else {
		int izq,der;
		izq = 2 * pos;
		der = izq + 1;
		build(izq,a,(a+b)/2);
		build(der,(a+b)/2+1,b);
		printf("%d %d\n",a,b);
		int lvalue,rvalue;
		lvalue = heap[izq];
		rvalue = heap[der];
		heap[pos] =  bitmask(lvalue,rvalue);
	}
}
int rmq(int pos,int ini,int fin , int a, int b){
	if (a > fin || b < ini) return -1; // current segment outside query range
	if (ini >= a && fin <= b) return heap[pos]; // inside query range
	// compute the min position in the left and right part of the interval
	int p1 = rmq(pos * 2 , ini , (ini+fin) / 2, a, b);
	int p2 = rmq(pos *2 + 1, (ini+fin) / 2 + 1, fin , a, b);
	if (p1 == -1) return p2; // if we try to access segment outside query
	if (p2 == -1) return p1; // same as above
	return bitmask(p1,p2); // as in build routine
}
int main(){
	int ans;

	while(scanf("%d",&n)!=EOF){
		for(int i = 1; i<=n; i++){
			scanf("%d",nums + i);
		}
		build(1,1,n);
		scanf("%d",&q);
		while(q--){
			scanf("%d%d",&a,&b);
			ans = rmq(1,1,n,a,b);
			printf("%d\n",binario(ans));		
		}
	}
	return 0;
}
