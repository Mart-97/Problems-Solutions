#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
map<char,int> mapa;
queue<char > cola;
string s;
class UnionFind {
private:
  vi p, rank, size;
  int numsets;
public:
  UnionFind(int N) {
    size.assign(N + 1, 1); numsets = N; rank.assign(N + 1, 0);
    p.assign(N + 1, 0); for (int i = 1; i <= N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numsets--; 
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) { p[y] = x; size[x] += size[y]; }
    else                   { p[x] = y; size[y] += size[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int disjoints() { return numsets; }
  int sizeset(int i) { return size[findSet(i)]; }
};
int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int acorns = 0,realsets = 1;
        mapa.clear();
        while(cin >> s){
            getchar();
            if(s[0] == '*') break;
            cola.push(s[1]),cola.push(s[3]);
            if(mapa[s[1]] == 0){
                mapa[s[1]] = realsets;
                realsets++;
            }
            if(mapa[s[3]] == 0){
                mapa[s[3]] =realsets;
                realsets++;

            }
        }
        UnionFind UF(realsets -1 );
        cin >> s;
        while(!cola.empty()){
            char a,b;
            a = cola.front(),cola.pop();
            b = cola.front(),cola.pop();
            UF.unionSet(mapa[a],mapa[b]);
        }
        for(int i = 0; i<s.size(); i++){
            if(s[i] != ',' ) {
                if( mapa[s[i]] == 0) acorns++;
            }
        }
      printf("There are %d tree(s) and %d acorn(s).\n",UF.disjoints(), acorns);
    }
    return 0;
}
