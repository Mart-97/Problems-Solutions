#include <cstdio>
#define MAXN 100000000
typedef long long int lli;

lli sum(lli n){
  return ((n * (n + 1)) / 2);
}
int main(){
  lli n;
  lli mid;
  while(scanf("%lld",&n),n!= 0){
    lli low = 1;
    lli high = MAXN;
    bool found = false;
    while(low < high){
      mid = (low + high) / 2;
      if(sum(mid - 1) < n && sum(mid) > n){
        printf("%lld %lld\n",sum(mid) - n, mid);
        found = true;
        break;
      }
      if(sum(mid)<=n){
        low = mid + 1;
      } else {
        high = mid;
      }
    }
    if(!found)printf("%lld %lld\n",sum(high) - n, high );
  }
  return 0;
}
