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

int main(){
  optimizar_io;
  int n;
  while(cin >> n >> s){
    cin.ignore();
    map<string,int> mapa;
    int m  = n - 1,pos;
    string sub;
    int rep =INT_MIN;
    for(int i = 0; m<s.size(); i++,m++){
      sub.assign(s,i,n);
      mapa[sub]++;
      if(mapa[sub] > rep){
        rep = mapa[sub];
        pos = i;
      }
    }
    int c = 0;
    for(int i = pos; c<n; c++,i++){
      cout << s[i];
    }
    cout << endl;
  }

  return 0;
}
