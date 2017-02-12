#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
priority_queue<ii> pq;
string s;
int cs[30];
int main(){
	cin >> s;
	int counter = 0;
	for(int i = 0; i<s.size(); i++){
		cs[s[i] - 'a' + 1]++;
	}
	ii p;
	for(int i = 1; i<=26; i++){
		if(cs[i]> 0){
			p.first = -cs[i];
			p.second = i;
			pq.push(p);
		}
	}
	int ans = 0;
	if(pq.size() == 1 || pq.size() == 2){
		puts("0");
		return 0;
	}
	while(pq.size() > 2){
		p = pq.top();
		ans+= -p.first;
		pq.pop();

	}
	printf("%d\n",ans);	
	return 0;
}
