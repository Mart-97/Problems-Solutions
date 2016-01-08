#include <cstdio>
#include <queue>
using namespace std;
int n,m;
bool matriz[52][52];
typedef struct
{
    int val;
    int nivel;
    int y;
}nodo;
queue <nodo> equis;
nodo actualx,actualy;
nodo tx,newx;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++) scanf("%d",&matriz[i][j]);
    }
    scanf("%d%d",&actualx.val,&actualx.y);
    scanf("%d%d",&tx.val,&tx.y);
    actualx.nivel = 0;
    equis.push(actualx);
    while(!equis.empty())
    {
      actualx = equis.front();
      equis.pop();
      if(actualx.val == tx.val and actualx.y == tx.y)
      {
          printf("%d",actualx.nivel + 1);
          return 0;
      }
      if(!matriz[actualx.val][actualx.y])
      {
        newx.val = actualx.val + 1;
        newx.y = actualx.y;
       if(newx.val>=0 and newx.val<n and newx.y>=0 and newx.y<m)
       {
           newx.nivel = actualx.nivel + 1;
          equis.push(newx);
       }

       newx.val = actualx.val - 1;
        newx.y = actualx.y;
       if(newx.val>=0 and newx.val<n and newx.y>=0 and newx.y<m)
       {
           newx.nivel = actualx.nivel + 1;
          equis.push(newx);
       }

        newx.val = actualx.val;
        newx.y = actualx.y + 1;
       if(newx.val>=0 and newx.val<n and newx.y>=0 and newx.y<m)
       {
           newx.nivel = actualx.nivel + 1;
          equis.push(newx);
       }

       newx.val = actualx.val;
        newx.y = actualx.y - 1;
       if(newx.val>=0 and newx.val<n and newx.y>=0 and newx.y<m)
       {
           newx.nivel = actualx.nivel + 1;
          equis.push(newx);
       }
       matriz[actualx.val][actualx.y] = 1 ;
      }
    }
	return 0;
}
