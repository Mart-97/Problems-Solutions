#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int main()
{
   scanf("%d",&n);
   long long int a,b;
   while(n--)
   {
      scanf("%lld""%lld",&a,&b);
     if(__gcd(a,b)== 1)
     {
     	printf("SI\n");
     } else
      {
      	printf("NO\n");

      }

   }
   return 0;
}
