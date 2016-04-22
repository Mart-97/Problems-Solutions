#include <bits/stdc++.h>
using namespace std;
int s,k,cases;
int problems[14];
int main(){
	while(scanf("%d",&s),s >= 0){
		fprintf(stdout,"Case %d:\n",++cases);
		problems[0] = s;
		for(int i = 1; i<=12; i++){
			scanf("%d",&k);
			problems[i] = problems[ i - 1] + k;
		}
		int need;
		for(int i = 1; i<=12; i++){
			scanf("%d",&need);
			if(problems[i - 1] >= need || need == 0){
				for(int j = i; j<=12; j++) {
					problems[j]-=need;
				}
				fprintf(stdout,"No problem! :D\n");
			} else {
				fprintf(stdout,"No problem. :(\n");
			}
		}
	}
	return 0;
}
