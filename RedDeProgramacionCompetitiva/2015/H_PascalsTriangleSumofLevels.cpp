#include <stdio.h>
#define MOD 1000007
typedef long long int lli;
using namespace std;
lli sums[10000];
lli expBin(lli a,lli n){
  if(n == 0) return 1;
  if(n == 1) return a;
  lli nextPow = expBin(a, n/2);
  nextPow = (nextPow * nextPow) % MOD;
  if(n % 2 == 0)
    return nextPow;
  return (nextPow * a) % MOD;
}

int main() {
  lli n,m;
  sums[1]=1;
  for(int i = 1; i<=1000; i++){
    lli ans = expBin(2,i);
    sums[i + 1] = sums[i] + ans;
  }
  while(scanf("%lld%lld",&n,&m),n!= -1 && m!=-1){
    printf("%lld\n",(MOD + (sums[m + 1] % MOD) - (sums[n] % MOD)) % MOD);
  }
   return 0;
}
