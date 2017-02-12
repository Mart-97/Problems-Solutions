#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

class cad{
public:
	string s1;
	string s2;
	void setVal(string S1, string S2){ s1 = S1; s2 = S2;};
};

bool compara(cad n1, cad n2);
int n;
vector<cad> nombres;
cad cadAux;
string aux1, aux2;

int  main(){
	
	cin >> n;

	while(n--){
		cin >> aux1 >> aux2;
		cadAux.setVal(aux1, aux2);
		nombres.pb(cadAux);
	}

	sort(nombres.begin(), nombres.end(), compara);

	for(int i = 0; i < nombres.size(); i++){
		cout << nombres[i].s1 << " " << nombres[i].s2 << endl;
	}

	return 0;
}

bool compara(cad n1, cad n2){
	for(int i = 0; i < min(n1.s2.size(),n2.s2.size()); i++){
		if(n1.s2[i] < n2.s2[i]){
			return true;
		}else if(n2.s2[i] < n1.s2[i]){
			return false;
		}
	}

	if(n2.s2.size() == n1.s2.size()){
		for(int i = 0; i < min(n1.s1.size(),n2.s1.size()); i++){
			if(n1.s1[i] < n2.s1[i]){
				return true;
			}else if(n2.s1[i] < n1.s1[i]){
				return false;
			}
		}
		if(n1.s1.size() < n2.s1.size()){
			return true;
		}else{
			return false;
		}
	}
	
	if(n1.s2.size() < n2.s2.size()){
		return true;
	}else{
		return false;
	}

}
