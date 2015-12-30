#include <bits/stdc++.h>
/* Omi 98- Calculos*/
using namespace std;
vector<int> visitados;
vector <int > steps;
///vector <int> padres;
int a,b,n;
int valor;
queue<int> cola;
int nuevovalor;
int main()
{
scanf("%d%d%d",&a,&b,&n);
visitados.resize(10002);
steps.resize(10002);
///padres.resize(10002);
valor = 1;
visitados[valor]=1;
steps[valor]= 0;
cola.push(valor);
while(!cola.empty())
{
	valor = cola.front();
	cola.pop();
	if(valor == n)
	{
		printf("%d\n",steps[valor]);
		break;
	}
	nuevovalor = valor * a;
	if(nuevovalor > 9999)
	{
		nuevovalor = 1;
	}
	if(visitados[nuevovalor] == 0)
	{
		cola.push(nuevovalor);
		visitados[nuevovalor] = 1;

		steps[nuevovalor] = steps[valor] + 1;
	}
	nuevovalor = valor / b;
	if(visitados[nuevovalor] == 0)
	{
		cola.push(nuevovalor);
		visitados[nuevovalor] = 1;
		steps[nuevovalor] = steps[valor] + 1;
	}

}
	return 0;
}
