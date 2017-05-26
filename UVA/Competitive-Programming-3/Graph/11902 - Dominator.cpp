#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 1000000
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<int> vi;
bool vis[102];
bool con[102];
bool mat[102][102];
char ans[102][102];
int v;
void dfs(int u,int m){
  vis[u] = true;
  if(m == -1) con[u] = true;
  for(int j = 0; j<v; j++){
    if(!vis[j] && mat[u][j] && j != m){
      ///cout << j << endl;
      dfs(j,m);
    }
  }
}
int main(){
  int tc;
  cin >> tc;
  forn(i,tc){
    cout << "Case "<< i+1 << ":"<< endl;
    memset(vis,false,sizeof vis);
    memset(con,false,sizeof con);
    cin >> v;
    for(int i = 0; i<v; i++){
      for(int j = 0; j<v; j++){
        cin >> mat[i][j];
      }
    }
    dfs(0,-1);
    for(int k = 0; k<v; k++){
     if(vis[k]) ans[0][k] = 'Y';
     else ans[0][k] = 'N';
    }
    for(int i = 1; i<v; i++){
      memset(vis,false,sizeof vis);
      ///vis[i] = true;
      dfs(0,i);
      //cout << "##########"<<endl;
      if(con[i]){
        for(int k = 0; k<v; k++){
          //cout << k <<" " << vis[k] << endl;
          if(con[k]){
            if(vis[k]) {
              ans[i][k] = 'N';
            }
            else {
              ans[i][k] = 'Y';
            }
          }else ans[i][k] = 'N';
        }
      } else {
         for(int k = 0; k<v; k++){
            ans[i][k] = 'N';
         }
      }
    }
    string s;
    s.pb('+');
    for(int i = 0; i<2*v-1;i++){
      s.pb('-');
    }
    s.pb('+');
    for(int i = 0; i<v; i++){
      cout << s << endl;
      for(int j = 0; j<v; j++ ){
        cout << "|"<< ans[i][j];
      }
      cout << "|";
      cout << endl;
     }
     cout << s << endl;
  }


  
return 0;
}
