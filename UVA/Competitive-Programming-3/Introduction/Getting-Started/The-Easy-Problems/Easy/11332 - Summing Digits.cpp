#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n),n!= 0){
        int acum = 0;
        while(n > 9){
            while(n > 0){
                acum+=(n % 10);
                n = n / 10;
            }
            n = acum;
            acum = 0;
        }
        printf("%d\n",n);
    }
    return 0;
}
