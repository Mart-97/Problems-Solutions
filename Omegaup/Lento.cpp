#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,minimo = INT_MAX,impares = 0, acum_pares = 0,k,acum_impares = 0;
    scanf("%lld",&n);
    for(int i = 0; i<n; i++){
        scanf("%lld",&k);
        if( k % 2 == 1){
            minimo = min(minimo,k);
            acum_impares+=k;
            impares++;
        } else {
            acum_pares+=k;
        }
    }
    if(impares % 2 == 0){
        acum_impares-=minimo;
        if(minimo == INT_MAX) puts("0");
        else {
            ///cout << acum_impares << " " << acum_pares << endl;
            printf("%lld",acum_impares + acum_pares);
        }
    } else {
        printf("%lld",acum_impares + acum_pares);
    }
return 0;
}
