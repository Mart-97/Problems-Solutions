///Algoritmo para encontrar los vertices de articulacion de un grafo usando DFS
#include <bits/stdc++.h>
#define MAXN 10000
using namespace std;
typedef struct{
	bool matriz[MAXN][MAXN];
	int pred[MAXN];
	int discover[MAXN]; 
	bool visit[MAXN];
	int low[MAXN];
	int nvertices;
}grafo;
grafo g;
int t;
bool points[MAXN];
void dfs_computeLow(int v){
	g.visit[v] = true;
	t++;
	g.low[v] = g.discover[v] = t ;
	for(int j = 1; j<=g.nvertices; j++){
		if(g.matriz[v][j] == true){
			if(g.visit[j] == false){
				g.pred[j] = v;
				dfs_computeLow(j);
				g.low[v] = min(g.low[v],g.low[j]);
			} else {
				if(j != g.pred[v]){
					g.low[v] = min(g.low[v],g.discover[j]);
				}
			}
		}
	}
}
void initialize_dfs(){
	for(int i = 1; i<=g.nvertices; i++){
		g.visit[i] = false;
		g.pred[i] = -1;
	}
	t = 0;
	for(int i = 1; i<=g.nvertices; i++){
		if(g.visit[i] == false) dfs_computeLow(i);
	}
}
void articulation(){
	for(int i = 1; i<=g.nvertices; i++){
		if(g.pred[i] == -1){
			int adj = 0;
			for(int j = 1; j<=g.nvertices; j++){
				if(g.matriz[i][j] == true) adj++;
			}
			if(adj > 1){
			 ///printf("Es un vertices de corte: %d\n",i);
			points[i] = true;
			}
		} else {
			for(int j = 1; j<=g.nvertices; j++){
				if(g.matriz[i][j] == true){
					if(g.low[j] >= g.discover[i]) {
						///printf("Es un vertices de corte: %d\n",i);
						points[i] = true;
					}
				}
			}
		}
	}
}

int main(){
	FILE *in;
	in = fopen("input.txt","r");
	///Lectura de cantidad de nodos;
	fscanf(in,"%d",&g.nvertices);
	int v = g.nvertices;
	///Lectura de la g.matriz
	for(int i = 1; i<=v; i++){
		for(int j = 1; j<=v; j++){
			fscanf(in,"%d",&g.matriz[i][j]);
		}
	}
	initialize_dfs();
	articulation();
	for(int i = 1; i<=g.nvertices; i++){
		if(points[i] == true) printf("El vertice %d es un vertice de corte\n", i);
	}
	fclose(in);
	return 0;
}
