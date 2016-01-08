#include <cstdio>
using namespace std;

int n,m,k,x,y,maximo=0,in,f,c=0,anterior;
int neb [502][502];
bool visits[502][502];
void busqueda(int x,int y,int anterior){
    if(x>0 && x<=n) {
            if(y>0 && y<=m) {
                if(visits[x][y]==0) {

     if( anterior-neb[x][y] <=k ){
            visits[x][y]=1;
   c++;
   busqueda(x+1,y,neb[x][y]);
   busqueda(x-1,y,neb[x][y]);
   busqueda(x,y+1,neb[x][y]);
   busqueda(x,y-1,neb[x][y]);
      }

}
    }
}
}
int main(){
scanf("%d""%d""%d",&n,&m,&k);
for(int i=1; i<=n; i++){
 for(int j=1; j<=m; j++){
    scanf("%d",&neb[i][j]);
    if(neb[i][j]>maximo){
        maximo=neb[i][j];
        in=i;
        f=j;
    }
 }

}
busqueda(in,f,neb[in][f]);

printf("%d",c);
return 0;
}
