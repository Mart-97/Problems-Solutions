#include <bits/stdc++.h>

using namespace std;
long long a,b,n,x;
int main(){
    bool wich;
    while(scanf("%lld",&n),n != 0){
        wich = true;
        a = 0;
        b = 0;
        for(int i = 0; i<31; i++){
            if((n & (1 << i)) != 0){
                ///puts("on");
                if(wich){
                    a = a | (1 << i);
                    wich = false;
                }else{
                    b  = b | (1 << i);
                    wich = true;
                }
            }
        }
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
