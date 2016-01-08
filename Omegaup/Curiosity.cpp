#include <cstdio>
#include <queue>
using namespace std;
struct nodo
{
	int val;
	int pasos;
};
int movesx[12];
int movesy[12];
queue<nodo> x;
queue<nodo> y;
int n,m,k;
nodo xi,yi,xf,yf;
	bool visitados[1005][1005];
int main()
{
	scanf("%d%d%d",&n,&m,&k);
	scanf("%d%d",&xi.val,&yi.val);
	scanf("%d%d",&xf.val,&yf.val);
	xi.pasos = 0;
	yi.pasos = 0;
	int equis,ye;
	int pos = 0;
	int mov = k;
while(k--)
{
    scanf("%d%d",&equis,&ye);
    movesx[pos]=equis;
    movesy[pos]=ye;
    pos++;
}
x.push(xi);
y.push(yi);
nodo actualx;
nodo actualy;
nodo newx,newy;
bool fin;
while(!x.empty()&&!y.empty())
{
    actualx =x.front();
    actualy =y.front();
    x.pop();
    y.pop();
    if(actualx.val==xf.val and actualy.val==yf.val)
    {
        printf("%d",actualx.pasos);
        fin = true;
        return 0;
    }
    if(visitados[actualx.val][actualy.val]==false)
    {
    for(int i = 0; i<mov; i++)
    {
        newx.val = actualx.val + movesx[i];
        newy.val = actualy.val + movesy[i];

       if(newx.val > 0 && newy.val > 0 && newx.val <=n && newy.val <=m )
       {

                newx.pasos = actualx.pasos + 1;
                newy.pasos = actualy.pasos + 1;
                x.push(newx);
                y.push(newy);

       }
    }
    visitados[actualx.val][actualy.val] = true;
    }
}
printf("-1");
	return 0;
}
