#include <bits/stdc++.h>
#define MAXN 40
using namespace std;
long long cuad[MAXN][MAXN];
int main(){
    int h,w;
    scanf("%d%d",&h,&w);
    h++;
    w++;
    for(int i = 1; i<=w; i++){
        cuad[1][i] = 1;
    }
    for(int i = 1; i<=h; i++){
        cuad[i][1] = 1;
    }
    for(int i = 2; i<=h; i++){
        for(int j = 2; j<=w; j++){
            cuad[i][j] = cuad[i][j - 1] + cuad[i - 1][j];
        }
    }
    printf("%lld",cuad[h][w]);
    return 0;
}
