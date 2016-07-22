#include <bits/stdc++.h>

using namespace std;
int heights[53];
int main(){
    int T,walls;
    scanf("%d",&T);
    int k = T;
    while(T--){
        scanf("%d",&walls);
        int lo = 0,hi = 0;
        for(int i = 0; i<walls; i++){
            scanf("%d",heights + i);
        }
        for(int i = 0; i + 1<walls; i++){
            if(heights[i]!= heights[i + 1]){
                (heights[i] < heights[i + 1]) ? hi++ : lo++;
            }
        }
        printf("Case %d: %d %d\n",k - T,hi,lo);
    }
return 0;
}
