#include <bits/stdc++.h>
using namespace std;
int nums[54];
int main(){
    int n,acum,sets = 0;;
    while(scanf("%d",&n),n!= 0){
        acum = 0;
        for(int i = 0; i<n; i++){
            scanf("%d",nums + i);
            acum+=nums[i];
        }
        int to = acum / n;
        sort(nums,nums+n);
        int pos = 0;
        acum = 0;
        while(pos < n && to - nums[pos] > 0) {
            acum += to - nums[pos];
            pos++;
        }
        printf("Set #%d\n",++sets);
        printf("The minimum number of moves is %d.\n",acum);
        puts("");
    }
    return 0;
}
