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
int ans,n;
char letters[102][102];
bool vis[102][102];
int x[8] = {0,1,0,-1,-1,1,1};
int y[8] = {1,0,-1,-1,1,-1,1};
int lastx,lasty,found,tam;
char s[102];

void search(int i,int j ,int p,int idx){
  if(i >=1 && i<=n && j<=n && j>=1 && p < tam && s[p] == letters[i][j]  && !found){
    if(p + 1 == tam){
      lastx = i;
      lasty = j;
      found = true;
    }
    search(i + x[idx],j + y[idx],p + 1,idx);
  }
}
int main(){
  ///optimizar_io;
  scanf("%d",&n);
  getchar();
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
      scanf(" %c",&letters[i][j]);
      ///printf("%c",letters[i][j] );
    }
  }
  
  getchar();
  while(scanf("%s",s),s[0]!= '0'){
    tam = strlen(s);
    int savei,savej;
    found = false;

    for(int i = 1; i<=n; i++){
      for(int j = 1; j<=n; j++){
        if(letters[i][j] == s[0]){
          for(int k = 0; k<8; k++){
            search(i,j,0,k);
          }
          if(found){
            savei = i;
            savej = j;
            break;
          }
        }
      }

      if(found ) break;

    }
    if(found){
      printf("%d,%d %d,%d\n",savei,savej,lastx,lasty);
    } else {
      puts("Not found");
    }
  }
  return 0;
}
