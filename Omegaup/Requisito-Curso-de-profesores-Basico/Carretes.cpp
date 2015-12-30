#include <bits/stdc++.h>
using namespace std;
char chain [203];
char  target[203];
int n,r,t,giros1,giros2,menor = 0;
int valor;

int main(){
scanf("%d",&n);
scanf("%s",chain);
scanf("%s",target);
for(int i = 0; i<n; i++)
{
   r = chain[i]- 48;
   t = target[i] - 48;
   if(t<=r)
   {
   	giros1 = r - t;
   	giros2 = (10 - r) + t;
   } else
   {
     giros1 = t - r;
     giros2 = r + (10 - t);
   }
   ///printf(" %d ""%d",r,t);
   menor = menor + min(giros2,giros1);;
}
printf("%d",menor);
return 0;
}
