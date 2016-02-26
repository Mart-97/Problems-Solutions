#include <bits/stdc++.h>
using namespace std;
int cases,n,m;
int main() {
	// your code goes here
	scanf("%d",&cases);
	while(cases--){
		scanf("%d%d",&n,&m);
		///if(n % 3 == 2)			n++;
		
		//if(m % 3 == 2) m++;
		printf("%d\n",(n / 3) *  (m / 3));
	}
	return 0;
}
