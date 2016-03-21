#include <bits/stdc++.h>
using namespace std;
char s[1000005];
int q,ini,fin;
bool uno = true,ceros= true;
int e;
int t = 1;
int main() {
	while(scanf("%s",s)!=EOF){
        printf("Case %d:\n",t);
        scanf("%d",&q);
        while(q--){
            scanf("%d%d",&ini,&fin);
            if (ini > fin) swap(ini,fin);
            for(int i = ini; i<=fin; i++){
                if(!uno && !ceros) break;
                if(s[i]=='0') uno = false;
                if(s[i]=='1') ceros = false;
            }
            if(!uno && !ceros) puts("No");
            else puts("Yes");
            uno = true;
            ceros = true;
        }
        t++;
	}
	return 0;
}
