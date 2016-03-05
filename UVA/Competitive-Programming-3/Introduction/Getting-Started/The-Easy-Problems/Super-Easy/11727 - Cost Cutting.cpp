#include <bits/stdc++.h>
using namespace std;
int salarios[4];
int t,steps=0;
int main() {
	scanf("%d",&t);
	while(t--){
		steps++;
		scanf("%d%d%d",&salarios[0],&salarios[1],&salarios[2]);
		sort(salarios,salarios+3);
		printf("Case %d: %d\n",steps,salarios[1]);
	}	
	return 0;
}
