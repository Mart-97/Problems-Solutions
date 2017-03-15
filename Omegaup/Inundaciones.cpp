#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
int mat[102][102];
bool vis[102][102];
int r,c,a,b;
void dfs(int x,int y){
  if(x>=1 && x<=r && y>=1 && y<=c && vis[x][y] == false ){
    vis[x][y] = true;
    if(mat[x+1][y] == 0){
      dfs(x+1,y);
    }
    if(mat[x][y+1]== 3){
      dfs(x,y+1);
    }
    if(mat[x-1][y] == 2){
      dfs(x-1,y);
    }
    if(mat[x][y-1] == 1){
      dfs(x,y-1);
    }
    if(mat[x][y] == 3) dfs(x,y-1);
    if(mat[x][y] == 0) dfs(x-1,y);
    if(mat[x][y] == 1) dfs(x,y+1);
    if(mat[x][y] == 2) dfs(x+1,y);
  }
}
int main(){
    optimizar_io
    cin >> r >> c >> a >> b;
    for(int i = 1; i<=r; i++){
      for(int j = 1; j<=c; j++){
        cin >> mat[i][j];
      }
    }
    ///vis[a][b] = true;
    cout <<"\n";
    dfs(a,b);
    for(int i = 1; i<=r; i++){
      for(int j = 1; j<=c; j++){
        cout << vis[i][j] <<" ";
      }
      cout << "\n";
    }
    return 0;
}
