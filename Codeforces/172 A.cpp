#include<stdio.h>
#include<math.h>
#include<cstring>
char s [300001][20];
int pos=0;
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){

    scanf("%s",s[i]);

    }
    for(int j=0; j<n; j++){

    }
    int longitud=strlen(s[0]);

    for(int i=0; i<longitud; i++){

     for(int j=0; j<n; j++){
     if(s[j][i]!=s[0][i]){
     printf("%d",i);
     return 0;     }
     }

    }
printf("%d",longitud);
return 0;
}
