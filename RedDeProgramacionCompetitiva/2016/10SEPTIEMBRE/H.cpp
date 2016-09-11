#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string s,sf;
int main(){
	cin >> s;
	for(int i = 0; i<s.size(); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			sf.push_back(s[i]);
		}
	}
	int i = 0;
	int j = sf.size() - 1;
	bool hap = true;
	while(i < j){
		if(sf[i] != sf[j]){
			hap = false;
			break;
		}
		i++;
		j--;
	}
	hap ? puts("S") : puts("N");
	return 0;
}
