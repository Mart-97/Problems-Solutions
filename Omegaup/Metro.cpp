///Aplicación del Algoritmo de Kruskal
#include <bits/stdc++.h>
using namespace std;
typedef pair < int, int> ii;
priority_queue <pair<int ,ii > > edgeList;
int parents[30005];
int rank[30005];
int setSize[30005];
int findSet(int p){
    while(p != parents[p]){
        p = parents[p];
    }
    return p;
}
bool isSameSet(int a,int b){
    return findSet(a) == findSet(b);
}
void unionSet(int a, int b){
    if(!isSameSet(a,b)){
        int x = findSet(a);
        int y = findSet(b);
        if (rank[x] > rank[y]) {
                parents[y] = x;
                setSize[x] += setSize[y];
        } else {
            parents[x] = y;
            setSize[y] += setSize[x];
            if (rank[x] == rank[y]) rank[y]++;
        }
    }
}
int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    for(int i = 1; i<=n; i++) parents[i] = i;
    for(int i = 0; i<m; i++){
        int a,b,weight;
        scanf("%d %d %d",&a,&b,&weight);
        edgeList.push(make_pair(-weight,ii(a,b)));
    }
    int mst_cost = 0;
    while(!edgeList.empty()){
        pair < int ,ii > current = edgeList.top();
        edgeList.pop();
        if(!isSameSet(current.second.first,current.second.second)){
            unionSet(current.second.first,current.second.second);
            mst_cost+= -current.first;
        }
    }
    printf("%d\n",mst_cost);
return 0;
}
