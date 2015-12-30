#include<bits/stdc++.h>
using namespace std;
map<int,int> cubeta;
stack<int> path;
int main()
{
int points,nodos,target;
scanf("%d%d%d",&points,&nodos,&target);
int padre,izq,der;
for(int i = 1; i<=nodos; i++)
{
    scanf("%d%d%d",&padre,&izq,&der);
    cubeta[izq]=padre;
    cubeta[der]=padre;
}
int pos;
pos = target;
while(cubeta[pos]!=0)
{
        pos = cubeta[pos];
        path.push(pos);

}
printf("%d\n",path.size()+1);
while(!path.empty())
{
    printf("%d\n",path.top());
    path.pop();
}
printf("%d",target);
return 0;

}
