#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 10005
#define pb push_back
#define mp make_pair
#define forn(r,a,b) for(int r = a; r<b; r++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define abs_val(a) (((a)>=0)?(a):-(a))


typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<iii> viii;
typedef vector<int> vi;
typedef vector<ll> vill;
vi books;
int main() {
  int n;
  while(scanf("%d",&n) != EOF){
    books.clear();
    for(int i = 0; i<n; i++){
      int a;
      scanf("%d",&a);
      books.pb(a);
    }
    int m;
    scanf("%d",&m);
    sort(books.begin(),books.end());
    int i = 0,j = n - 1;
    int x,y;
    while(i < j){
      if(books[i] + books[j] > m ){
          j--;
      }else{
        if(books[i] + books[j] < m){
          i++;
        } else {
            x = i;
            y = j;
            i++,j--;
        }
      }
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n",books[x],books[y]);
  }

  return 0;
}
