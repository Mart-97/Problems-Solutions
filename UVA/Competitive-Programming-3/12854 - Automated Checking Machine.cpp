#include <bits/stdc++.h>
using namespace std;
char line[10];
char line2[10];
int f[7];
int x[7];
int main(){
	while(fgets(line,sizeof(line),stdin)!=NULL){
		getchar();
		fgets(line2,sizeof(line2),stdin);
		getchar();
		sscanf(line,"%d%d%d%d%d",&f[1],&f[2],&f[3],&f[4],&f[5]);
		sscanf(line2,"%d%d%d%d%d",&x[1],&x[2],&x[3],&x[4],&x[5]);
		bool hap = true;
		for(int i = 1; i<=5; i++){
			if(x[i] == f[i]) hap = false;
		}
		hap ? puts("Y") : puts("N");
	}
	return 0;
}
