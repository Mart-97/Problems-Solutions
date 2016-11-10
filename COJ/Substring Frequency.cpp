#include <cstdio>
#include <string>
#include <iostream>
#define MAXN 1000004
#define B 127
using namespace std;

typedef long long int lli;
 lli hs[MAXN];
 lli ht[MAXN];
string s,t;
lli expBin(lli a,lli n){
  if(n == 0) return 1;
  if(n == 1) return a;
  lli nextPow = expBin(a, n/2);
  nextPow = (nextPow * nextPow); /// % MOD
  if(n % 2 == 0)
    return nextPow;
  return (nextPow * a); /// % MOD
}
lli hashf(lli *h,int i, int j){
return h[i] - h[j + 1] * (expBin(B,j+1-i));
}
int main(){
    int tc;
    scanf("%d",&tc);
    int cases = 0;
    while(tc--){
        int tams,tamt;
        cin >> s;
        cin >> t;
        tams = s.size()-1;
        tamt = t.size()-1;
        hs[tams+1] = 0;
        ht[tamt+1] = 0;
        hs[tams] = s[tams];
        ht[tamt] = t[tamt];
        for(int i = tams - 1; i>=0; i--){
            hs[i] = s[i] + hs[i+1] * B;
        }
        for(int i = tamt - 1; i>=0; i--){
            ht[i] = t[i] + ht[i+1] * B;
        }
       lli valt =  hashf(&ht[0],0,tamt);
       int fin = tamt;
       int ini = 0;
       int acum = 0;
       while(fin<=tams){
            lli vals = hashf(&hs[0],ini,fin);
            vals == valt ?  acum++ : acum;
            fin++;
            ini++;
       }
        printf("Case %d: %d\n",++cases,acum);
        s.clear();
        t.clear();
    }
return 0;
}
