#include <stdio.h>

using namespace std;
int nodes,edges;
int parents[10006];
int pa,pb,disjoints;
bool sameSet(int a,int b){
	pa = a;
	pb = b;
	while(pa!=parents[pa]){
		pa = parents[pa];
	}
	while(pb!= parents[pb]){
		pb = parents[pb];
	}
	if(pa == pb) return true;
	else return false;

}
void Union(int a,int b){
	if(!sameSet(a,b)){
		parents[b] = pa;
		disjoints--;
	}
}
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d %d",&nodes,&edges);
		disjoints = nodes;
		for(int i = 1; i<=nodes; i++) {
			parents[i] = i;
		}
		while(edges--){
			int a,b;
			scanf("%d %d",&a,&b);
			Union(a,b);
		}
		int n = disjoints;
		printf("%d\n",(n *(n - 1)/2));
	}
	return 0;
}
