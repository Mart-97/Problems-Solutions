#include <bits/stdc++.h>
using namespace std;
#define INF 1 << 30
#define MAXN 10002
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef pair< pair< int,double>, pair<int,string> > quad;
typedef struct{
  int id,lev;
}node;
bool vis[32];
bool counted[32];
vector<vi> AdjList;

int bfs(int s,int ttl){
  int nr = 0;
  node actual;
  memset(vis,false,sizeof vis);
  memset(counted,false,sizeof counted);
  queue<node> q;
  actual.id = s;
  actual.lev = 0;
  q.push(actual);
  while(!q.empty()){
    ///puts("atrapado");
    actual = q.front(),q.pop();
    int u  = actual.id,v;
    if(!vis[u]){
      if(actual.lev <= ttl && !counted[u]) {
        nr++;
        counted[u] = true;
      }
      for(int j =  0; j<AdjList[u].size(); j++){
        v = AdjList[u][j];
        node nuevo;
        nuevo.id = v;
        nuevo.lev = actual.lev + 1;
        q.push(nuevo);
      }
      vis[u] = true;
    }
  }

  return nr;
}
int main(){
  optimizar_io;
  int n;
  int tc = 0;
  while(cin >> n){
    AdjList.assign(32,vi());
    map<int,int> mapa;
    if(n == 0) break;
    int tn = 0;
    forn(i,n){
      int a,b;
      cin >> a >> b;
      if(mapa[a] == 0 ){
        mapa[a] = ++tn;
      }
      if(mapa[b] == 0){
        mapa[b] = ++tn;
      }
      AdjList[mapa[a]].pb(mapa[b]);
      AdjList[mapa[b]].pb(mapa[a]);
    }
    while(true){
      int s,ttl;
      cin >> s >> ttl;
      if(s == 0&& ttl == 0) break;
      int reach = 0;
      if(mapa[s] > 0)
       reach = bfs(mapa[s],ttl);
      cout << "Case "<< ++tc <<": "<< tn - reach <<" nodes not reachable from node "<< s<< " with TTL = " << ttl << "."<< endl;
    }
  }
  return 0;
}
