#include <cstdio>
#include <set>
using namespace std;
typedef pair <int,int > ii;
set <ii>setii;
set <ii>::iterator it;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	while(n--){
		int x,y;
		scanf("%d%d",&x,&y);
		setii.insert(ii(x,y));
	}
	while(k--){
		int x,y;
		scanf("%d%d",&x,&y);
		it = setii.find(ii(x,y));
		it == setii.end() ? puts("1") : puts("0");
	}
	return 0;
}
