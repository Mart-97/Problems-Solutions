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

int main(){
  optimizar_io;
  int n,tc = 0;
  while(cin >> n){
    int q;
    if(n == 0 )break;
    vi seq;
    for(int i = 0; i<n; i++){
      int a;
      cin >> a;
      seq.pb(a);
    }
    cin >> q;
    cout << "Case "<<++tc <<":"<< endl;
    while(q--){
      int x;
      cin >> x;
      int minimo = INT_MAX,ans;
      for(int i = 0; i<seq.size(); i++){
        for(int j = i + 1; j<seq.size(); j++){
          int sum = seq[i] + seq[j];
          if(abs(sum - x ) < minimo ){
            minimo = abs(sum -  x);
            ans =  sum;
          
          }
        }
      }
      cout << "Closest sum to "<< x <<" is "<<ans <<"."<<endl;
    }
  }
  return 0;
}
