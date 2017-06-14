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
int cs[102];
int main(){
  ///optimizar_io;
  int n;
  int tc;
  cin >> tc;
  string line;
  cin.ignore();
  getline(cin,line);
  int k = 0;
  while(tc--){
    map<string,int> frec;
    int total = 0;
    if(k > 0) cout << endl;
    k++;
    bool fin = false;
    while(true){
     
      if(getline(cin,line).eof()) fin = true;
       if(line.size() == 0) {
        break;
      }
      if(frec[line] == 0){
        frec[line]++;
      }else {
        frec[line]++;
      }
      total++;
      if(fin) break;
    }
    map<string,int>:: iterator it;
    for(it = frec.begin(); it != frec.end(); it++){
      double ans = (double)((double)it->snd * 100.0) / ((double)total);
      cout << it->fst << " ";
      printf("%.4lf\n",ans);
    }

    if(fin) break;
  }

  return 0;
}
