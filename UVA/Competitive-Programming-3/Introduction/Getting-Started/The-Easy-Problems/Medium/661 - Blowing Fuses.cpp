#include <bits/stdc++.h>
using namespace std;
int n,m,c,ans,k;
int maximo,casos = 1;
int nums[24];
bool ap[23],final;
int main() {
	// your code goes here
	while(scanf("%d%d%d",&n,&m,&c),n!= 0 && m!= 0 && c!=0){
		ans = 0;
		final = true;
		maximo = INT_MIN;
		for(int i = 1; i<=n; i++){
			scanf("%d",nums + i);
		}
		while(m--){
			scanf("%d",&k);
			if(ap[k]== false){
				ap[k] = true;
				ans+= nums[k];
			} else {
				ap[k] = false;
				ans-= nums[k];
			}
			maximo = max(ans,maximo);
			if(ans > c) {
				final = false;
			}
		}
		if(!final) printf("Sequence %d\nFuse was blown.\n\n",casos);
		else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",casos,maximo);
		casos++;
		for(int i = 0; i<=20; i++) ap[i] = false;
	}
	return 0;
}
