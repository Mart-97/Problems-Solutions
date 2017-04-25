#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 2003
#define MOD 1000000
#define pb push_back
#define mp make_pair
#define forn(r,a,b) for(int r = a; r<b; r++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second

typedef long long int lli;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<iii> viii;
typedef vector<int> vi;
lli memo[MAXN][MAXN];
lli comb(int i, int j){
  if(j == 0 || i == j) return 1;
  if(memo[i][j] != 0) return memo[i][j];
  return memo[i][j] = (comb(i-1,j-1) + comb(i-1,j)) % MOD;
}
int main(){
  lli n;
  scanf("%lld",&n);
  printf("%lld\n",( (MOD + (comb(2*n,n) % MOD)) - (comb(2*n,n-1) % MOD)) % MOD);
  
  return 0;
    
}
