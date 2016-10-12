#include <cstdio>
#include <map>
#include <string>
#include <iostream>
#define MAXN 100005
using namespace std;
map<string,int> mapa;
int p[MAXN*2];
int setSize[MAXN*2];
int Rank[MAXN*2];
int findSet(int i){
  return (p[i] == i) ? i : p[i] = findSet(p[i]);
}
void unionSet(int i , int j){
  int x = findSet(i);
  int y = findSet(j);
  if(x != y){
    if(Rank[x] > Rank[y]){
      p[y] = x;
      setSize[x] += setSize[y];
    } else {
      p[x] = y;
      setSize[y] += setSize[x];
      if(Rank[x] == Rank[y]) Rank[y]++;
    }
  }
}
int sizeSet(int i){
  return setSize[findSet(i)];
}
string s,st;
int main(){
  int cases,n;
  scanf("%d",&cases);
  while(cases--){
    int cont = 1;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
      p[i] = i;
      Rank[i] = 0;
      setSize[i] = 1;
      p[i + n] = i + n;
      Rank[i + n] = 0;
      setSize[i + n] = 1;
    }
    for(int i = 0; i<n; i++){
      cin >> s;
      cin >> st;
      if(mapa[s] == 0){
        mapa[s] = cont;
        cont++;
      }
      if(mapa[st] == 0){
        mapa[st] = cont;
        cont++;
      }
      unionSet(mapa[s],mapa[st]);
      printf("%d\n",sizeSet(mapa[s]));
    }
    mapa.clear();
  }
  return 0;
}
