#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 1004
#define MOD 1000000000
#define pb push_back
#define mp make_pair
#define forn(r,a,b) for(int r = a; r<b; r++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define endl '\n'
#define pi 3.14159
typedef long long int lli;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<iii> viii;
typedef vector<int> vi;
int grid[MAXN][MAXN];
int main(){
  optimizar_io;
  int n,m;
  cin >> n >> m;
  for(int i = 1; i<=n; i++){
    grid[i][1] = i;
  }
  for(int i = 1; i<=m; i++){
    grid[1][i] = i;
  }
  for(int i = 2; i<=n; i++){
    for(int j = 2; j<=m; j++){
      grid[i][j] = ((grid[i-1][j] % MOD) + ((grid[i][j-1]) %MOD)) %MOD;
      grid[i][j] = (grid[i][j]+1) % MOD ;
    }
  }
printf("%d\n",grid[n][m]);
  
  return 0;
}
