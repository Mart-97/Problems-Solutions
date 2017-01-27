#include <bits/stdc++.h>
#define MAXN 80000000015

using namespace std;
typedef long long int lli;

lli zeros(lli n){
long long int res;
long long int c = 0;
 while(n!=0){
      res=n/5;
      c+=res;
      n=res;

    }
    return c;
}
int main(){
  lli lo = 1,hi,mid,m;
  hi = MAXN;
  cin >> m;
  ///printf("%lld\n",hi);
  bool found = false;
  while(lo < hi ){
    mid = (lo + hi) / 2;
    if(zeros(mid)==m){
        printf("%lld\n",mid - (mid % 5));
        found = true;
        break;
    }else {
        if(zeros(mid) <  m){
            if(zeros(mid)+ 1 == m){
                printf("%lld\n",mid - (mid % 5) + 5);
                found = true;
                break;
            }
            lo = mid + 1 ;
        }else {
            hi = mid - 1;
        }
    }
  }
  if(!found) printf("%lld",lo);

return 0;
}
