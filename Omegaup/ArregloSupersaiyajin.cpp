#include <cstdio>
#include <cmath>
#define MOD 1000000007
typedef long long int lli;
lli n,k,sum=0,p;
using namespace std;
lli nums[1002];
lli expBin(lli a,lli n){
  if(n == 0) return 1;
  if(n == 1) return a;
  lli nextPow = expBin(a, n/2);
  nextPow = (nextPow * nextPow) % MOD;
  if(n % 2 == 0)
    return nextPow;
  return (nextPow * a) % MOD;
}
int main(){
  scanf("%lld%lld",&n,&k);
  for(int i = 0; i < n; i++){
    scanf("%lld",nums + i);
  }
  for(int i = 0; i < n; i++){
    sum+=nums[i];
  }
  p = expBin(n - 1,k);
  ///p=pow(n-1,k);
  printf("%lld",((p % MOD)*(sum % MOD) % MOD));
  return 0;
}
