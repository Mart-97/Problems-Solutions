#include <cstdio>
#include <cmath>
#define MAX 100000
using namespace std;
int criba [MAX+2];

int a,b;
int raiz;
int contador=0;
int  eratostenes(int r)
{
	for(int i=2; i<=raiz; i++ )
	{
		if(criba[i]==0)
		{
			for(int j=i*i; j<=MAX; j+=i) criba[j]=1;
		}
	}
}
void rango(int inicio,int fin)
{
	int division,pos;
	for(int i=4; i<=MAX; i++)
	{
		if(criba[i]==1)
		{
			for(int j=2; j<MAX; j++)
			{
			  if(i%j==0&&criba[j]==0)
			  {
              division=i/j;
              contador++;
              if(criba[division]==0) contador++;
              else {
              	//aqui va, cuando, el resultado de la div no es un numero primo
              contador+=criba[division];
              }
              criba[i]=contador;
                            break;
              }

			}
		}
		contador=0;
	}
}
int main()
{

	scanf("%d""%d",&a,&b);
criba[0]=1;
raiz=sqrt(MAX);
eratostenes(raiz);
rango(a,b);
contador=0;
for(int i=a; i<=b; i++)
{
    if(criba[criba[i]]==0) contador++;

}
  printf("%d",contador);
return 0;
}
