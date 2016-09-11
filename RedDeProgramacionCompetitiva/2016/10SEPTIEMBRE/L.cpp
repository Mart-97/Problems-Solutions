#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;
int fil,col,color,counter;
int grid[202][202];
bool vis[202][202];
void dfs(int x, int y){
	if(x >= 0 && x <fil && y >=0 && y<col && grid[x][y]==color && vis[x][y] == false){
		counter++;
		vis[x][y] = true;
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x , y + 1);
	}
}
int main(){
	int minimo = INT_MAX;
	scanf("%d %d",&fil,&col);
	for(int i = 0; i<fil; i++){
		for(int j = 0; j<col; j++){
			scanf("%d",&grid[i][j]);
		}
	}
	for(int i = 0; i<fil; i++){
		for(int j = 0; j<col; j++){
				color = grid[i][j];
				dfs(i,j);
				if(counter != 0) minimo = min(minimo,counter);
				counter = 0;
		}
	}
	printf("%d\n",minimo);
}
