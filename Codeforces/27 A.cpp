#include<stdio.h>
main()
{
 int n,a[3000],t,i,j,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j]) {t=a[i];a[i]=a[j];a[j]=t;}

    k=a[0]+1;
    if(a[0]>=2) {printf("1");return(0);}
    if(n==1) {printf("%d",k);return(0);}
    for(i=1;i<n;i++)
    {
        if(a[i]!=k) {printf("%d",k);return(0);}
        else {if(i==n-1) printf("%d",k+1); else k++;}
    }
}
