#include <bits/stdc++.h>
using namespace std;
int n,numero,par,impar;
int main(){
scanf("%d",&n);
while(n--)
{
    scanf("%d",&numero);
	if(numero % 2 == 0) par++;
	else impar++;
}
printf("%d %d",par,impar);
return 0;
}
