#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 1000000
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<int> vi;
vi::iterator low,upper;
class SegmentTree {        
private: vi st, A;            
  int n;
  int left (int p) { return p << 1; }   
  int right(int p) { return (p << 1) + 1; }

  void build(int p, int L, int R) {                          
    if (L == R)                          
      st[p] = 1;                                     
    else {                               
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      int mid = (L + R) / 2;
      int mid2 = (L + R) / 2 + 1;
      int p1 = st[left(p)], p2 = st[right(p)],p3 = -1;
      if(A[mid] == A[mid2]){
        int val = A[mid];
        low = lower_bound(A.begin()+ L,A.begin()+R+1,val);
        upper = upper_bound(A.begin()+L,A.begin()+R+1,val);
        int lo = low - A.begin();
        int up = upper - A.begin()-1;
        p3 = up - lo + 1  ;
      }

      st[p] = max(max(p1,p2),p3);

  } }

  int rmq(int p, int L, int R, int i, int j) {                  
    if (i >  R || j <  L) return -1; 
    if (L >= i && R <= j) return st[p];              
  
    int p1 = rmq(left(p) , L            , (L+R) / 2  , i, j);
    int p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);
    int mid = (L + R) / 2;
      int mid2 = (L + R) / 2 + 1;
    int p3 = -1;
    if(A[mid] == A[mid2] && p1 != -1 && p2 != -1){
        int val = A[mid];
        int left = max(L,i),right = min(R,j);
        low = lower_bound(A.begin()+ L,A.begin()+R+1,val);
        upper = upper_bound(A.begin()+L,A.begin()+R+1,val);
        int lo = low - A.begin();
        int up = upper - A.begin()-1;
        p3 = min(up,j) - max(lo,i) + 1  ;
      }

    return max(max(p1,p2),p3);
  }

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (int)A.size();            
    st.assign(4 * n, 0);          
    build(1, 0, n-1);                                
  }

  int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); }   
};
int main(){
  int n,q;
  while(cin >> n ){
    if(n == 0) break;
    cin >> q;
    vi arr;
    for(int i = 0; i<n; i++){
     int x;
     cin >> x;
     arr.pb(x);
   }
    SegmentTree ST(arr);
    while(q--){
      int i,j;
      cin >> i >> j;
      cout << ST.rmq(i-1,j-1) << endl;;
    }  
  }
return 0;
}
