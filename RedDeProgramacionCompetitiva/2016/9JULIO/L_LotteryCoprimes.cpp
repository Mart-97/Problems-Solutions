#include <bits/stdc++.h>

using namespace std;
string number[22];
int main(){
	string s;
	int t,cont = 1;
	scanf("%d",&t);
	while(t--){
		bool hap = false;
		cin >> s;
		for(int i = 0; i< s.size() - 1; i++){
			number[i].append(s.begin(),s.begin() + i + 1 );
			number[i + 10].append(s.begin() + i + 1, s.end());
		}
		printf("Ticket #%d:\n",cont);
		for(int i = 0; i< s.size() - 1; i++){
			int n,m;
			n = atoi(number[i].c_str());
			m = atoi(number[i + 10].c_str());
			if(__gcd(n,m) == 1) {
				printf("%d %d\n",n,m);
				hap  = true;
				break;
			}
		}
		if(!hap) puts("Not relative");
		for(int i = 0; i< s.size() - 1; i++){
			number[i].clear();
			number[i + 10].clear();
		}
		cont++;
	}
	return 0;
}
