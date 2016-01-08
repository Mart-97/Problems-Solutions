#include <bits/stdc++.h>
using namespace std;
char crap;
int n,m,t,fin = 1,r,f;
char c[30],d[30],e[1];
char a[100000000], b[100000000];
int arrows (char letra)
{
   if(letra < 97)
   {
      r = letra - 'A' + 1;
   } else r = letra - 'a'+ 1;
   return r;
}

int  process(int multiplo,char cadena[])
{

    int suma = 0,contador = 0;
    fin = 1;
while(contador < multiplo )
    {
        for(int i=contador; i<t; i+=multiplo)
        {
           suma += arrows(cadena[i]);
        }
        suma = suma % 10;
        //printf("%d ",suma);

        contador++;
        suma = suma + 1;
        //printf("%d ",suma);
        fin *= suma % 10;
       // printf("%d ",suma);
        suma = 0;
    }
    return fin % 10;
}

int main()
{
scanf("%c",&crap);
scanf("%d",&n);
scanf("%s",a);
getchar();
t = strlen(a);
 int res  = process(n,a);
 //printf("%d",res);
 scanf("%c",&crap);
scanf("%d",&n);
scanf("%s",b);
getchar();
 int r1  = process(n,b);
 r1+=64;
 printf("%d-%c",res+1,r1+1);

return 0;
}
