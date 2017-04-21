#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 1000000000000
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
int expBin(int  a , int n,int m){
  if(n == 0) return 1;
  if(n == 1) return a;
  int ans = expBin(a , n / 2, m);
  ans = (ans * ans ) % m;
  if(n % 2 == 0){
    return ans;
  } else {
    return (ans*a) % m;
  }
}
int main(){
  int tc;
  scanf("%d",&tc);
  while(tc--){
    int x,y,n;
    scanf("%d%d%d",&x,&y,&n);
    printf("%d\n",expBin(x,y,n) );
  }
  return 0;

}
