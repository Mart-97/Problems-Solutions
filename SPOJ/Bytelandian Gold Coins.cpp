#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
map<lli,lli> memo;
lli ans;
lli f(lli n){
    if(n == 0) return 0;
    if(memo[n] != 0) return memo[n];
    ans = f(n / 2) + f(n/3) + f(n / 4);
    return memo[n] = max(ans,n);

} 
int main(){
    lli n;
    while(cin >> n){
        memo.clear();
        printf("%lld\n",f(n));
    }
    return 0;
}
