#include <cstdio>
#include <queue>

using namespace std;

typedef struct{
	int peso;
	int x;
	int y;
	int nivel;
}nodo;

nodo creaNodo(int x, int y, int nivel);

int m, n, x, y;
int mat[500][500];
char c;
queue<nodo> arbol;
nodo aux;
bool bandera;
bool visitado[500][500];

int main(){
	nodo aux;
	scanf("%d %d",&m,&n);

	scanf("%c",&c);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%c",&c);
			mat[i][j] = c%48;
		}
		scanf("%c",&c);
	}

	m--;
	n--;
	aux.x = 0;
	aux.y = 0;
	aux.peso = mat[0][0];
	aux.nivel = 0;
	arbol.push(aux);

	while(!arbol.empty() && !bandera){
		aux = arbol.front();
		arbol.pop();
		if(aux.x == m && aux.y == n){
			printf("%d\n", aux.nivel);
			bandera = true;
		}else{
			if(!visitado[aux.x][aux.y]){
				if(aux.x + aux.peso <= m){
						arbol.push(creaNodo(aux.x + aux.peso, aux.y, aux.nivel+1));
				}
				if(aux.x - aux.peso >= 0){
					
						arbol.push(creaNodo(aux.x - aux.peso, aux.y, aux.nivel+1));
					
				}
				if(aux.y + aux.peso <= n){
					
						arbol.push(creaNodo(aux.x, aux.y + aux.peso, aux.nivel+1));
					
				}
				if(aux.y - aux.peso >= 0){
					
						arbol.push(creaNodo(aux.x, aux.y - aux.peso, aux.nivel+1));
					
				}
				visitado[aux.x][aux.y] = true;
			}
		}

	}

	if(!bandera){
		printf("IMPOSSIBLE\n");
	}
	return 0;
}

nodo creaNodo(int x, int y, int nivel){
	nodo aux;
	aux.x = x;
	aux.y = y;
	aux.nivel = nivel;
	aux.peso = mat[x][y];
	return aux;
}
