#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 30004
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i = (a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define MOD 1000000
#define snd second
#define endl '\n'
typedef long long int ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<int> vi;
string s;
string t;
list<string> ls;
int main() {
  getline(cin,s);
  int i = 0;
  while(i < s.size()){
    t.clear();
    bool side = false;
    while(s[i] == '['   ||  s[i] == ']' && i<s.size()) i++;
    if( i > 0){
      if(s[i - 1] == '[') side = true;
    }
    while(s[i] != '[' && s[i] != ']' && i<s.size()){
      t.pb(s[i]);
      i++;
    }
    if(side){
      ls.push_front(t);
    }else{
      ls.pb(t);;
    }
  }
  while(!ls.empty()){
        cout << ls.front();
        ls.pop_front();
    }
return 0;
}
