#include <bits/stdc++.h>
using namespace std;
int cases,x,y,divx,divy;
int main() {
	while(true){
		scanf("%d",&cases);
		if(cases==0) break;
		scanf("%d%d",&divx,&divy);
		while(cases--){
			scanf("%d%d",&x,&y);
			if(x == divx || y == divy){
				puts("divisa");
			} else {
				if(x > divx && y > divy){
					puts("NE");
				} else {
					if(x > divx && y < divy){
						puts("SE");
					} else {
						if(x < divx && y < divy){
							puts("SO");
						} else {
							puts("NO");
						}
					}
				}
			}
		}
	}
	return 0;
}
