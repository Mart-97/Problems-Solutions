#include <bits/stdc++.h>

using namespace std;
int main(){
	int total = 0 ,n,contador = 1,ant;
	while(scanf("%d",&n), n != 0) {
		total+=n;
		if(total / 50 > 1) {
			printf("Input #%d: ",contador);
			puts("Totally Sweet!");
			total = total - ( 50 * (total / 50) );
		} else {
			if(total / 50 == 1) {
				printf("Input #%d: ",contador);
				puts("Sweet!");
				total = total - ( 50 * (total / 50) );
			}
		}	
		contador++;
	}
	return 0;
}
