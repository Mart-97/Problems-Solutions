#include <bits/stdc++.h>
using namespace std;
#define INF 1LL <<60
#define MAXN 60005
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
ll expBin(ll a,ll n,ll mod){
  if(n == 0) return 1;
  if(n == 1) return a;
  ll next = expBin(a,n/2,mod);
  next = (next * next) % mod;
  if(n % 2 == 0){
    return next;
  }else{
    return (next * a) % mod;
  }

}

int main(){
  ll a,n,mod;
  while(scanf("%lld%lld%lld",&a,&n,&mod) != EOF){
    printf("%lld\n",expBin(a,n,mod));
  }
  return 0;
}
