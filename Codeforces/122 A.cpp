#include <stdio.h>
#include <math.h>
int main (){
int x[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int n;
int res,rf;
scanf("%d",&n);

for(int i=0; i<14; i++)
{
    res=n%x[i];

    if (res==0){
        printf("YES");
        return 0;
    }
    }
printf("NO");
return 0;
}
