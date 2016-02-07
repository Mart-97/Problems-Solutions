#include <bits/stdc++.h>

using namespace std;
typedef struct {
	int brote;
	int nut;
	int izq;
	int der;
	int padre;
} nodo ;
nodo lista[1005];
int ultimo = 0, t,actualb,actualnut,ant,maximo = INT_MAX * -1,actualmax = 0 ;
void inserta(int  pos, int valor,int actual){
if(lista[pos].brote<valor) {
        ant = pos;
     if(lista[pos].der!=-1)
     {
         inserta(lista[pos].der,valor,actual);
     } else {
        lista[ultimo].brote = valor;
        lista[ultimo].nut = actual;
        lista[ultimo].padre = ant;
        lista[ultimo].izq = -1;
        lista[ultimo].der = -1;
        lista[pos].der = ultimo;
        ultimo++;
     }
} else {
        ant = pos;
     if(lista[pos].izq!=-1) {
         inserta(lista[pos].izq,valor,actual);
     } else {
        lista[ultimo].brote=valor;
        lista[ultimo].nut = actual;
        lista[ultimo].padre = ant;
        lista[ultimo].izq=-1;
        lista[ultimo].der=-1;
        lista[pos].izq=ultimo;
        ultimo++;
     }
}
}
int main()
{
	scanf("%d",&t);
	int tam = t;
		scanf("%d%d",&actualb,&actualnut);
	lista[0].brote=actualb;
	lista[0].nut = actualnut;
	lista[0].padre = -1;
    lista[0].izq=-1;
    lista[0].der=-1;
    ultimo++;
t--;
while(t--) {
	scanf("%d%d",&actualb,&actualnut);
	inserta(0,actualb,actualnut);
}
int pos;
for(int i = 0; i<=ultimo; i++){
    if(lista[i].izq == -1 and lista[i].der == -1){
        pos = i;
          ///printf("%d\n",actualmax);
        while(pos!=0) {
            actualmax += lista[pos].nut;
            ///printf("%d\n",actualmax);
            pos = lista[pos].padre;
        }
        maximo = max(maximo,actualmax);
        actualmax = 0;
    }
   /// printf("%d %d",lista[i].der,lista[i].izq);
}
printf("%d",maximo + lista[0].nut);
	return 0;
}
