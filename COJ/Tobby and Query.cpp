#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
int nums[MAXN];
int acums[10][MAXN];
int n;
int main(){
  optimizar_io;
  while(cin >> n){
    for(int i = 1; i<=n; i++){
      cin >> nums[i];
    }
    for(int i = 0; i<=9; i++){
      int p = 0;
      acums[i][0] = 0;
      for(int j = 1; j<=n; j++){
        if(nums[j] == i)acums[i][j] = acums[i][j - 1] + 1;
        else acums[i][j] =acums[i][j - 1];
      }
    }
    int q;
    cin >> q;
    int a,b;
    while(q--){
      cin >> a >> b;
      int ans = 0;
      for(int i = 0; i<=9; i++){
        if(acums[i][b] - acums[i][a-1] > 0) ans++;
      }
      cout << ans << "\n";
    }
  }
    return 0;
}
