#include <bits/stdc++.h>
using namespace std;
int criba[2000000];
int l,h,c=0;
int main()
{
     scanf("%d%d",&l,&h);
 for(int i = 1; i<=h; i++)
 {
 	for(int j = i ; j<=h; j+=i)
 	{
      if(j%i==0) criba[j]++;
    }

 }
for(int i = l; i<=h; i++)
{
   if(i%criba[i]==0)c++;

}
 printf("%d",c);
}
