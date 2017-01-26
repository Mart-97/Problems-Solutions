#include <bits/stdc++.h>

using namespace std;

int ans[6][7500];
int coin[]={1,5,10,25,50};
int ways(int type , int val){
    for(int i = 0; i<6; i++ )
        ans[i][0] = 1;
    for(int i = 1; i<=val; i++)
        ans[0][i] = 0;
    for(int i = 1; i<6; i++ ){
        for(int j = 1; j<=val; j++){
            if(j>=coin[i - 1]){
                ans[i][j] = ans[i - 1][j] + ans[i][j - coin[i - 1]];
            }else{
                ans[i][j] = ans[i - 1][j];
            }
        }
    }
    return ans[5][val];
}
int main(){
   int v;
   while(cin >> v){
        memset(ans,0,sizeof ans);
        printf("%d\n",ways(0,v));
   }
return 0;
}
