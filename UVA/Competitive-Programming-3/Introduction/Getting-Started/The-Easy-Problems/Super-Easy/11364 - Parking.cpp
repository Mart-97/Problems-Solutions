#include <bits/stdc++.h>
using namespace std;
int  t,n;
int arr[22];
int main() {
scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int ans = 0;
		for(int i = 0; i<n; i++){
			scanf("%d",arr + i);
		}
		sort(arr,arr+n);
			for(int i = 0; i<n - 1; i++){
				ans = ans +( 2*(arr[i + 1] - arr[i])); 
			}
	printf("%d\n",ans);
	}
	return 0;
}
