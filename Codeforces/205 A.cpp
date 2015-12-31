#include <stdio.h>
#include <math.h>

int main(){
  int x;
  scanf("%d",&x);
  int lml =(1<<30);
  int m=0;
  int ciudad = 0;
  int z;
   for(int i=0; i<x; i++)
   {
      scanf("%d",&z);

      if(z<lml){
      lml = z;
       m = 0;
       ciudad=i;

      }else{

          if(z==lml){
          m++;
          }
      }

   }

if(m>0){
 printf("Still Rozdil");
}
else{
 printf("%d",ciudad+1);
}
return 0;
}
