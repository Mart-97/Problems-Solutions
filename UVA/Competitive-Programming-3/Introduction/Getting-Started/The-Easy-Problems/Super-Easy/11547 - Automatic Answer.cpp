#include <bits/stdc++.h>
using namespace std;
int ops(int m){
int ans;
	m*=567;
	m/=9;
	m+=7492;
	m*=235;
	m/=47;
	m-=498;
	m/=10;
	ans = m % 10;
return ans;	
}
int t,n;
int main() {
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",abs(ops(n)));
	}	
	return 0;
}
