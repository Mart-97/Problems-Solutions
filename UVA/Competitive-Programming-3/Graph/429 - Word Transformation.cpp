#include <bits/stdc++.h>
using namespace std;
#define INF 1LL <<60
#define MAXN 10000000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 33
#define EPS 1e-9
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<ii> vii;
typedef vector<int> vi;
string s;
vector<string> d;
map<string,int> mapa;
typedef struct{
  string t;
  int stps;
}nodo;
int bfs(const string& a, const string& b){
  nodo actual,nuevo;
  queue<nodo> q;
  actual.t = a;
  actual.stps = 0;
  int ans = 0;
  q.push(actual);
  ///puts("bfs");
  while(!q.empty()) {
    actual = q.front(),q.pop();
    ///cout << actual.t << " | " << b<< endl;
    if(actual.t == b){
      ////cout <<"Ans  ="<< actual.stps << endl;
      ans = actual.stps;
      break;
    }
    int diff;
    ///puts("ciclado");
    if(mapa[actual.t] == 0){
      for(int i = 0; i<d.size(); i++){
        diff = 0;
        if(actual.t.size() == d[i].size()){
          string n,m;
          n = actual.t;
          m = d[i];
          for(int j = 0; j<m.size(); j++){
            if(m[j] != n[j]) diff++;
          }
          if(diff == 1){
            ///cout << n << " " << m << " "<< actual.stps <<endl;
            //puts("diffs");
            nuevo.t = m;
            nuevo.stps = actual.stps + 1;
            q.push(nuevo);
          }
        }
      }
      mapa[actual.t]++;
    }
  }
  return ans;
}
int main(){
  optimizar_io;
  int n;
  cin >> n;
  //cin.ignore();
  forn(i,n){
    d.clear();
    while(true){
      cin >> s;
      if(s == "*") break;
      d.pb(s);
      ////cout << s << endl;
    }
    string a,b;
    cin.ignore();
    while(!getline(cin,s).eof()){
      if(s.empty()) break;
      a.clear();
      b.clear();
      ///cout << s << endl;
      int p = 0;
      while(s[p]!= ' '){
        a.pb(s[p++]);
      }
      p++;
      while(p<s.size()){
        b.pb(s[p++]);
      }
      mapa.clear();
      int k = bfs(a,b);
      cout << a << " " << b << " " << k << endl;
    }
    ///cout << s << endl;
    if(!s.empty()){
      a.clear(),b.clear();
      int p = 0;
      while(s[p]!= ' '){
        a.pb(s[p++]);
      }
      p++;
      while(p<s.size()){
        b.pb(s[p++]);
      }
      mapa.clear();
      int k = bfs(a,b);
      cout << a << " " << b << " " << k << endl; 
    }
    if (i < n - 1)cout << endl;
  }

  return 0;
}
