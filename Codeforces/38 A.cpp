#include<stdio.h>
#include<math.h>
int main (){

 int x,y[101],a,b,z[101];

 scanf("%d",&x);

 for(int i=0; i<x-1; i++){

  scanf("%d",&y[i]);

}
scanf("%d",&a);
scanf("%d",&b);
int cont=0;
for(int i=a-1; i<b-1; i++){
    cont+= y[i];

}
printf("%d",cont);
return 0;
}
