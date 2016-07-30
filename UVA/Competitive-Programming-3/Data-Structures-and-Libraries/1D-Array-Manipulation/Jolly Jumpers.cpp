#include <bits/stdc++.h>
using namespace std;
int nums[3004];
vector <bool> vb;
int main(){
    int n;
    bool happens;
    while(scanf("%d",&n)!=EOF){
        happens = true;
        vb.resize(n);
        for(int i = 0; i<n; i++){
            scanf("%d",nums + i);
        }
        for(int i = 0; i<n - 1; i++){
           int comp =  abs(nums[ i + 1] - nums[i]);
           if(comp == 0 || comp >=n){
               happens = false;
               break;
           } else{
               if(vb[comp] == true){
                    happens = false;
                    break;
               } else {
                    vb[comp] = true;
               }
           }
        }
        if(n == 1) happens = true;
        happens ? puts("Jolly") : puts("Not jolly");
        vb.clear();
    }
return 0;
}
