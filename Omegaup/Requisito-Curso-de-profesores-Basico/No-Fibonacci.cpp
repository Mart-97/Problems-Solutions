#include <cstdio>

using namespace std;
int n,p=1,p2=1,fib;
int fibonacci[30000]={1,1};
int main()
{
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
    {
     fib=p+p2;
     if(fib>n) break;
     fibonacci[fib]=1;
     p2=p;
     p=fib;

    }
    for(int i=4; i<n; i++)
    {
       if(fibonacci[i]==0)  printf(" %d",i);

    }
    return 0;
}
