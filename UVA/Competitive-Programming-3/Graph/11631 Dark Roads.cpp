#include <bits/stdc++.h>
using namespace std;
#define INF 1LL <<60
#define MAXN 10004
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define EPS 1e-9
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<ii> vii;
typedef vector<int> vi;
int n,m;
priority_queue<iii> pq;
class UnionFind{
private:
    vi rank,parent;
public:
    UnionFind(int n){
      rank.assign(n,0);
      parent.assign(n,0);
      for(int i = 0; i<n; i++){
        parent[i] = i;
      }
    }
    int findSet(int i){
      return (parent[i] == i) ? i : (parent[i] = findSet(parent[i])); 
    }
    bool isSameSet(int i, int j){
      int x = findSet(i);
      int y = findSet(j);
      return x == y ? true : false;
    }
    void unionSet(int i , int j){
      int x = findSet(i);
      int y = findSet(j);
      if(rank[x] > rank[y]){
        parent[y] = x;
      } else {
        parent[x] = y;
        if(rank[x] == rank[y]) rank[y]++;
      }
    }

};
int main(){
  optimizar_io;
  while(cin >> n >> m){
    if(m == 0 && n == 0) break;
    iii p;
    int total = 0;
    forn(i,m){
      cin >> p.snd.fst >> p.snd.snd >> p.fst;
      total+= p.fst;
      pq.push(mp(-p.fst,ii(-p.snd.fst,-p.snd.snd)));

    }
    UnionFind uf(n);
    int cost = 0,cont = 0;
    while(!pq.empty()){
      p = pq.top(),pq.pop();
      if(!uf.isSameSet(-p.snd.snd,-p.snd.fst) ){
        ///cout << -p.fst <<" " << -p.snd.fst << " "<< -p.snd.snd << endl;
        
        uf.unionSet(-p.snd.snd,-p.snd.fst);
        cost+= (-p.fst);
      }

    }
    cout <<total - cost << endl;
  } 
}
