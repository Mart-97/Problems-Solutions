#include <cstdio>

using namespace std;
int x,y,r,aux,i,f,c=1;
int main()
{
   scanf("%d""%d",&x,&y);
  i=x;
  f=y;
  printf("%d ""%d ",x,y);
   while(true){
         r=x+y;
   if(r>=10)r-=10;
   x=y;
   y=r;
  if(i==x&&y==f) {
          printf("%d\n",y);
          break;
  }else {
  printf("%d ",y);
  }
   c++;
   }
   printf("%d",c);
    return 0;
}
