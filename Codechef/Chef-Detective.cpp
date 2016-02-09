#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
bool cubeta[MAXN];
int main()
{
    int n;

scanf("%d",&n);
int padre;
for(int i = 1; i<=n; i++){
scanf("%d",&padre);
cubeta[padre]=1;
}
for(int i = 1; i<=n; i++){
    if(!cubeta[i]) printf("%d ", i);
}
    return 0;
}
