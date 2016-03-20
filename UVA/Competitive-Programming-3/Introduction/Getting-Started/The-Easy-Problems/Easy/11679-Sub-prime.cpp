#include<bits/stdc++.h>
using namespace std;
int b,n,x;
int saldos[22];
int main(){
	bool neg = false;
	int origen,dest,cuantos;
	while(true){
		scanf("%d",&b);
		scanf("%d",&n);
		if(n == 0 && b == 0) break;
		for(int i = 1; i<=b; i++){
			scanf("%d",&x);
			saldos[i] = x;
		}
		while(n--){
			scanf("%d%d%d",&origen,&dest,&cuantos);
			saldos[origen]-=cuantos;
			saldos[dest]+=cuantos;
		}
		for(int i = 1; i<=b; i++){
			if(saldos[i] < 0) {
				neg = true;
				break;
			}
		}
		if(neg)puts("N");
		else puts("S");
		neg = false;
		for(int i = 1; i<=b; i++) saldos[i]= 0;
	}
return 0;	
}
