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
int main(){
  optimizar_io;
  int n;
  int tc = 0;
  while(cin >> n){
    map<string,int> mapa;
    if(tc > 0) cout << endl;
    tc++;
    vector<string> vs;
    forn(i,n){
      string s;
      cin >> s;
      vs.pb(s);
    }
    forn(i,n){
      string s;
      int spent,p;
      cin >> s >> spent >> p;
      int amount = (p != 0) ?  spent / p : 0;
      mapa[s]-= amount * p;
      for(int j = 0; j<p; j++){
        string t;
        cin >> t;
        mapa[t]+= amount;
      }
    }
    forn(i,vs.size()){
      cout << vs[i] <<" "<< mapa[vs[i]] << endl;;
    }
    //cout << endl;
  }

  return 0;
}
