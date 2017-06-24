#include <bits/stdc++.h>
using namespace std;
#define INF 1 << 30
#define MAXN 5001
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
typedef vector<ll> vi;
char h;
double k;
int main(){
  int tc;
  scanf("%d",&tc);
  while(tc--){
    int n;
    scanf("%d",&n);
    double brec = 0.0,hrec = 0.0,alight = 0.0,atot;
    scanf(" %c %lf",&h,&k);
    brec += k;
    alight += k * k;
    n--;
    for(int  i = 0; i<4 && n > 0; i++){
      while(true){
        if(n == 0) break;
        scanf(" %c %lf",&h,&k);
        n--;
        if(h == 'S' || h== 'C'){
          alight = alight + (k * k);
        }else {
          double mid = k / 2.0;
          double htri = (k * k) - mid * mid;
          htri = sqrt(htri);
          double atri = k * htri / 2.0;
          alight += (atri);
        }
        if (i == 0) brec+= k;
        if(i == 1) hrec += k; 
        if(h == 'C') break;
      }
        if(i == 0) hrec+= k; 
    }
          atot = hrec * brec;

    double ans = atot - alight;
    printf("%.4lf\n",ans);

  }
  return 0;
}
