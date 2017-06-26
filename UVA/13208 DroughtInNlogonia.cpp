///Accepted in UVa Judge
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
typedef pair<ll,ll> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<ii> vii;
typedef vector<ll> vi;
int id;
class SegmentTree {         
private: vi st, A;           
  int n;
  int left (int p) { return p << 1; }     
  int right(int p) { return (p << 1) + 1; }

  void build(int p, int L, int R) {                          
    if (L == R)                          
      st[p] = L;                                      
    else {                               
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      int p1 = st[left(p)], p2 = st[right(p)];
      if(A[p1] == A[p2]){
        (p1 < p2) ? st[p] = p2: st[p] = p1;
      }else {
        st[p] = (A[p1] > A[p2]) ? p1 : p2;
      }


  } }

  int rmq(int p, int L, int R, int i, int j) {               
    if (i >  R || j <  L) return -1; 
    if (L >= i && R <= j) return st[p];             

    int p1 = rmq(left(p) , L            , (L+R) / 2  , i, j);
    int p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);

    if (p1 == -1) return p2; 
    if (p2 == -1) return p1; 
    if(A[p1] == A[p2]){
      return p1 < p2 ? p2 : p1;
    }else {
      return (A[p1] > A[p2]) ? p1 : p2;
    }
  }
 

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (int)A.size();             
    st.assign(4 * n, 0);            
    build(1, 0, n - 1);                                  
  }

  ll rmq(int i, int j) { 
    int v = rmq(1, 0, n - 1, i, j);
    id = v; 
    return A[v];
  }   
};
ll acum [MAXN];
int main(){
  optimizar_io;
  int tc;
  cin >> tc;
  while(tc--){
    ll a,n;
    memset(acum,0,sizeof acum);
    vi dist,h;
    cin >> a  >> n;
    for(ll i = 0; i<n; i++){
      ll k;
      cin >> k;
      dist.pb(k);
      if(i == 0) {
        acum[i] = k;
      } else {
        acum[i] = acum[i - 1] + k;
      }

    }
    ll k;

    for(ll i = 0; i<=n; i++){
      cin >> k;
      h.pb(k);
    }
    SegmentTree st(h);
    int pos = 0,hi = h.size() - 1;
    ll d ,ans = 0,hh;
    while(true){
      d = 0;
      if(pos + 1 >= h.size()) break; 
      ll x = h[pos];
      int idx = pos;
      ll val = st.rmq(pos+1,hi);
      if(x < val){
        while(x >= h[pos]){
          d+= dist[pos];
          pos++;
        }
        hh = min(h[pos],h[idx]);
      } else {
        d+= (pos  == 0) ? acum[id - 1] : acum[id - 1] - acum[pos-1] ; 
        hh = min(x,h[id]);
        pos = id;
      }
      ans+= hh * a * d;
    }
    cout << ans << endl;
  }

  return 0;
}
