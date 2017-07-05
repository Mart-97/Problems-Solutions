#include <bits/stdc++.h>
using namespace std;
#define INF 1LL <<60
#define MAXN 10004
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define EPS 1e-9
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,string> iis;
typedef vector<ii> vii;
typedef vector<int> vi;
string s;
int exist[28];
map<int,char> mapa;
int main(){
  for(int i = 0; i<=9; i++){
    mapa[i] = '0' + i;
  }
  while(cin >> s){
    string ans;
    stack <char> stk;
    memset(exist,0,sizeof exist);
    int count = 0;
    for(int i = 0; i<s.size(); i++){
      if(exist[s[i]-'a' + 1] == 0){
        exist[s[i] - 'a' + 1] = ++count;
      } 
      int a = exist[s[i] - 'a' + 1];
      while(a > 0){
        int idx = a % 10;
        char v = char(mapa[idx]);
        stk.push(v);
        a /= 10;
      }
      while(!stk.empty()){
        ans = ans + stk.top(),stk.pop();
      }
    }
    ///cout << ans.size() << endl;
    for(int i = 0; i<ans.size(); i++){
      if(ans[i] == '2'){
        cout << '5';
      } else {
        if(ans[i] == '5'){
          cout << '2';
        }else{
          if(ans[i] == '6'){
            cout << '9';
          }else{
            if(ans[i] == '9'){
              cout << '6';
            } else {
              cout << ans[i];
            }
          }
        }
      }
    }
    cout << endl;
  }
  

  
  return 0;
}
