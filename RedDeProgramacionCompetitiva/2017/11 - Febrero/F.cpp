#include <bits/stdc++.h>

using namespace std;

int n, k, maxSalvo, minRoto, piso, dif;
string estado;

int main(){
	cin >> n >> k;
	minRoto = k;
	maxSalvo = 1;

	while(n--)	{
		cin >> piso >> estado;
		estado[0] == 'S' ? maxSalvo = max(maxSalvo,piso) : minRoto = min(minRoto, piso);
	}

	minRoto+1 == maxSalvo ? cout << minRoto << " " << maxSalvo << endl : cout << maxSalvo+1 << " " << minRoto-1 << endl;

	return 0;
}
