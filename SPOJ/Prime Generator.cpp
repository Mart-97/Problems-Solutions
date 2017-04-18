#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 32000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define forn(r,a,b) for(int r = a; r<b; r++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define endl '\n'

typedef long long int lli;
typedef pair<int,int> ii;
typedef pair<int,ii> cii;
typedef pair<ii,string> iis;
typedef vector<cii> viii;
typedef vector<int> vi;
vi primes;
bool isprime[MAXN];
void sieve(int n){
  for(int i = 2; i<=n; i++){
    if(!isprime[i]){
      primes.pb(i);
      for(int j = i * i; j<=n; j+=i ){
        isprime[j] = true;
      }
    }
  }
}
bool prime(int k ){
  int root = sqrt(k);
  for(int i = 0; i<primes.size() && primes[i]<=root; i++){
    if( k % primes[i] == 0) return false;
  }
  return true;
}
int main(){
  sieve(MAXN);
  optimizar_io;
  int tc;
  cin >> tc;
  while(tc--){
    int nn,n,mm,m;
    cin >> mm >> nn;
    m = min(mm,nn);
    n = max(mm,nn);
    for(int i = m; i<=n ;i++){
      if(prime(i) && i > 1) cout << i << endl;
    }
    cout << endl;
  }
  return 0;

    
}
