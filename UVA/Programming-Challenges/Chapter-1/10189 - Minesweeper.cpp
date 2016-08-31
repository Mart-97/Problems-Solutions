#include <bits/stdc++.h>

using namespace std;
vector< vector <int > > grid;

int n,m;
int main(){
    char let;
    int cases = 0;
   while( scanf("%d%d",&n,&m),n != 0 && m != 0){
        grid.resize(102,vector <int > (102));
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                scanf(" %c",&let);
                if(let == '*') grid[i][j] = -1;
            }
           
        }
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                if(grid[i][j] == -1){
                    if(grid[i + 1][j] != -1) ++grid[i + 1][j];
                    if(grid[i - 1][j] != -1) ++grid[i - 1][j];
                    if(grid[i][j + 1] != -1) ++grid[i][j + 1];
                    if(grid[i][j - 1] != -1) ++grid[i][j - 1];
                    if(grid[i - 1][j - 1] != -1) ++grid[i - 1][j - 1];
                    if(grid[i + 1][j - 1] != -1) ++grid[i + 1][j - 1];
                    if(grid[i + 1][j + 1] != -1) ++grid[i + 1][j + 1];
                    if(grid[i - 1][j + 1] != -1) ++grid[i - 1][j + 1];
                }
            }
        }
        if(cases > 0) printf("\n");
        printf("Field #%d:\n",++cases);
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                if(grid[i][j] != -1)  printf("%d", grid[i][j] );
                else printf("*");
            }
            printf("\n");
        }
        grid.clear();
    }
    return 0;
}
