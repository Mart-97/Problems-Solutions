#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
int tablero[102][102];
int movs[6];
int newrows[102];
int newcols[102];
int main(){
    optimizar_io
    int r,c,k;
    cin >> r >> c >> k;
    while(k--){
      int m;
      cin >> m;
      if(m == 1) movs[m] = (movs[m] + 1) % r;
      if(m == 2) movs[m] = (movs[m] + r - 1) % r;
      if(m == 4) movs[m] = (movs[m] + c - 1) % c;
      if(m == 3) movs[m] = (movs[m] + 1) % c;
    }
    for(int i = 0; i<r; i++){
      for(int j = 0; j<c; j++){
        cin >> tablero[i][j];
      }
    }
    int pos ;
    for(int i = 0; i<r; i++){
      pos = (i + (movs[2] * (r - 1 ))) % r ;
      newrows[pos] = i;
      newrows[pos] = (newrows[pos] + movs[1]  )% r  ;
    }
    for(int i = 0; i<c; i++){
      pos = (i + (movs[4] * (c - 1))) % c;
      newcols[pos] = i;
      newcols[pos] = (newcols[pos] + movs[3]) % c;
    }
    for(int i = 0; i<r; i++){
      for(int j = 0; j<c; j++){
        cout << tablero[newrows[i]][newcols[j]] <<" ";
      }
      cout << "\n";
    }
    return 0;
}
