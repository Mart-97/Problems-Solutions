#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000
int fibonacci[1000000]= {1,1};
int first = 1,second = 1,aux,numero,s;
int main()
{
	scanf("%d",&numero);

	for(int i = 2; i<=numero; i++)
	{
       fibonacci[i] = (fibonacci[i - 1] % MOD + fibonacci[i - 2] % MOD) % MOD;
	}
	printf("%d",fibonacci[numero]);
return 0;
}
