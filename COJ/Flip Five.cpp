#include <stdio.h>
#include <queue>
using namespace std;
typedef struct{
	int val;
	int pasos;
}nodo;
queue <nodo> cola;
int cases;
int inicial;
char l;
int recorrido;
int estados[10]={11,23,38,89,186,308,200,464,416};
bool existe[512];
int bfs(int elem){
	nodo nuevonodo;
	nuevonodo.val = 0;
	nuevonodo.pasos = 0;
	cola.push(nuevonodo);
	while(!cola.empty()){
		nodo actual = cola.front();
		cola.pop();
		if(actual.val == elem){
			while(!cola.empty()) cola.pop();
			return actual.pasos;
		}
		if(!existe[actual.val]){
			for(int i = 0; i<9;i++){
				nuevonodo.val = actual.val ^ estados[i];
				nuevonodo.pasos = actual.pasos + 1;
				cola.push(nuevonodo);			
			}
			existe[actual.val] = true;
		}
	}
}
int main(){
	while(scanf("%d",&cases),cases!=EOF){
		nodo raiz;
		while(cases--){
			inicial = 0;
			for(int i = 0; i<512;i++) existe[i] = false;
			for(int i = 0; i<9; i++){
				scanf(" %c",&l);
				if(l == '*'){
					recorrido = 1 << (i);
					inicial  = inicial | recorrido; 
				}
			}
			printf("%d\n",bfs(inicial));
		}
	}
	return 0;
}
