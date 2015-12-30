#include <bits/stdc++.h>
using namespace std;
struct nodo
{
   int val;
    int nivel;
};

queue<nodo> cola;
map<int,bool> mapa;
int main()
{
	nodo nuevonodo;
	nodo target;
	nodo  actual;

	scanf("%d%d",&nuevonodo.val,&target.val);
	nuevonodo.nivel = 0;
	if(nuevonodo.val  < target.val)
    {
	cola.push(nuevonodo);
	while(!cola.empty())
	{
		actual = cola.front();
		mapa[actual.val] = true;
        cola.pop();
		if(actual.val == target.val)
		{
         printf("%d",actual.nivel);
         break;
		}
		nuevonodo.val = actual.val * 2;
		if(nuevonodo.val <= 200000 && mapa[nuevonodo.val]==false ){
		nuevonodo.nivel = actual.nivel + 1;
        cola.push(nuevonodo);
		}

        nuevonodo.val = actual.val - 1;
        if(nuevonodo.val > 0 && mapa[nuevonodo.val] == false){
        nuevonodo.nivel = actual.nivel + 1;
        cola.push(nuevonodo);
        }
	}
    } else printf("%d",nuevonodo.val - target.val);
	return 0;
}
