#include <cstdio>
int matriz[102][102];
int l,a,n,c1,c2,c=0;
int main (){
scanf("%d" "%d",&l,&a);
scanf("%d",&n);

 for(int i=1; i<=n; i++){
 	scanf("%d""%d",&c1,&c2);
 	matriz[c1][c2]=1;
 }
  for(int i=1; i<l; i++){
   for(int j=1; j<a; j++){
   	if(matriz[i][j]==0){
        if(matriz[i+1][j]==0){
        	if(matriz[i][j+1]==0){
        		if(matriz[i+1][j+1]==0) c++;
        	}
        }

   	}
   }

  }
printf("%d",c );
}
