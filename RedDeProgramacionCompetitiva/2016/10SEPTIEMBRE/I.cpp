#include <cstdio>
#include <algorithm>


using namespace std;

int N, tmp;
int alturas[50002];
int maxposible[3][50002];

int main(){

	scanf("%d", &N);
	alturas[0] = 1;
	maxposible[0][0] = 0;
	for(int i = 1; i <= N; i++){
		scanf("%d", &alturas[i]);
		if(alturas[i] > maxposible[0][i-1]){
			maxposible[0][i] = maxposible[0][i-1]+1;
		}else if(alturas[i] == maxposible[0][i-1]){
			maxposible[0][i] = maxposible[0][i-1];
		}else{
			maxposible[0][i] = alturas[i];
		}
	}
	maxposible[1][N+1] = 0;
	for(int i = N; i > 0; i--){
		if(alturas[i] > maxposible[1][i+1]){
			maxposible[1][i] = maxposible[1][i+1]+1;
		}else if(alturas[i] == maxposible[1][i+1]){
			maxposible[1][i] = maxposible[1][i+1];
		}else{
			maxposible[1][i] = alturas[i];
		}
		maxposible[2][i] = min(maxposible[0][i], maxposible[1][i]);
	}

	sort(maxposible[2]+1, maxposible[2]+N+1);
	printf("%d\n", maxposible[2][N]);

	return 0;
}
