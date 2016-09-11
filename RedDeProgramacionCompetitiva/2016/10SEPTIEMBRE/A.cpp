#include <cstdio>

using namespace std;

int a,b,c;
int resA, resB, resC;

int main(){

	scanf("%d %d %d", &a, &b, &c);

	if(a == b || b == c || a == c){
		printf("S\n");
	}else{
		resA = a - (b + c);
		resB = b - (a + c);
		resC = c - (a + b);
		if(resA == 0 || resB == 0 || resC == 0){
			printf("S\n");
		}else{
			printf("N\n");
		}
	}


	return 0;
}
