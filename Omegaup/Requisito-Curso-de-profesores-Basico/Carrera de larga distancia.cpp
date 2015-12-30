#include <bits/stdc++.h>
using namespace std;
int backk,expected,up,fro,down;
char muve;
int suma = 0,s2=0,mul,c=0;
int main(){
scanf("%d""%d""%d""%d""%d",&backk,&expected,&up,&fro,&down);
for(int i = 1; i <= expected; i++)
{
scanf(" %c",&muve);
if(muve == 'U')
    {
     suma +=up;
      s2+=down;
    }
else
if(muve == 'F')
{
 suma +=fro;
 s2+=fro;
}
else
if(muve== 'D')
    {
    suma += down;
    s2+=up;
    }
mul = (suma + s2);
  if(mul <=backk)c++;
}

printf("%d",c);
return 0;
}
