#include <stdio.h>
#include <algorithm>
#include <cmath>
#define MAXN 500005
#define MOD 1000000007
typedef long long int lli;
using namespace std;
lli x[MAXN];
lli y[MAXN];
lli n;
lli p = 0,c;
lli k,t;
lli ans_x,ans_y;
lli suma(lli arreglo[]){
	lli a,b,acum_a = 0 ,acum_b = 0,ans;
	lli positive = c - 1;
	for(lli i = 0; i<c; i++,positive--){
		a = arreglo[i] * i;
		a*=-1;
		b = arreglo[i] * positive;
		acum_a += a;
		acum_b+=b;
	}
	ans = acum_a + acum_b;
	ans = abs(ans);
	return ans;
}
int main(){
	scanf("%lld",&n);
	c = n;
	while(n--){
		scanf("%lld%lld",&k,&t);
		x[p] = k;
		y[p] = t;
		p++;
	}
	sort(x,x+c);
	sort(y,y+c);
	ans_x = suma(x);
	ans_y = suma(y);
	printf("%lld",((ans_x % MOD) + (ans_y % MOD)) % MOD );
	return 0;
}
