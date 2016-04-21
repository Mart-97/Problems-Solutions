#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef struct{
	int val;
	string url;
	int orden;
}page;
bool compareval(page lhs, page rhs) { 
	return lhs.val > rhs.val; 
}
bool compareorden(page lhs, page rhs) { 
	return lhs.orden < rhs.orden; 
}
page enlaces[12];
int k = 1;
int cases;
int main(){
	scanf("%d",&cases);
	k = cases;
	while(cases--){
		for(int i = 1; i<=10; i++){
			cin >> enlaces[i].url;
			cin >> enlaces[i].val;
			enlaces[i].orden = i;
		}
		printf("Case #%d:\n",k-cases);
		int p,c=1;
		sort(enlaces+1,enlaces+10,compareval);
		p = enlaces[1].val;

		sort(enlaces+1,enlaces+10,compareorden);
		for(int i = 1; i<=10; i++){
			if(enlaces[i].val == p){
				cout << enlaces[i].url << "\n";
			}	
		}
	}
	return 0;
}
