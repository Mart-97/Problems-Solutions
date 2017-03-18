#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
double ans;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
int main(){
  double n;
  while(cin >> n){
    if(n == 0) break;
    double d = n - 1;
    n /=2;
    double s = (((2*n-1) * (2*n+1)*(2*n)) / 3) / d;
    ans = sqrt(s);
    printf("%.6lf\n",ans);
  }
   
    return 0;
}
