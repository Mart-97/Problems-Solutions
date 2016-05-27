#include <cstdio>
#include <algorithm>
#include <climits>
#define MAXN 1000005
using namespace std;
int boxes[MAXN];
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1; i<=n; i++){
		scanf("%d",boxes + i);
	}
	int maximo = INT_MIN;
	for(int i = 2; i<=n; i++){
		if(boxes[i] < boxes[i] + boxes[i - 1]){
			boxes[i] = boxes[i] + boxes[ i - 1];
			maximo = max(maximo,boxes[i]);
		}
	}
	printf("%d\n",maximo);
	return 0;
}
