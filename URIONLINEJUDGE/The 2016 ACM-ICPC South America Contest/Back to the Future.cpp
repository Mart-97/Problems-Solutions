#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
int grade[MAXN];
vector<vii> adlist;
set<ii> setp;
set<ii>::iterator it,it2;
bool exist[MAXN];
int main(){ 
    int n,m,a,b,x,y;
    memset(exist,true,sizeof exist);
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int total = n;
    adlist.assign(n + 2,vii());
    for(int i = 1; i<=m; i++){
        scanf("%d %d",&x,&y);
        adlist[x].pb(ii(y,0));
        adlist[y].pb(ii(x,0));
    }
    for(int i = 1; i<=n; i++){
        grade[i] = adlist[i].size();
        setp.insert(ii(grade[i],i));
    }
    bool happens = true;
    ///return 0;
    while(true){
        if(setp.empty()) break;
        it = setp.begin();
        happens = true;
        if(it->first < a || (total - 1) - it->first  < b ){
            exist[it->second] = false;
            for(int i = 0; i< adlist[it->second].size(); i++){
                ii p = adlist[it->second][i];
                if(exist[p.first]){
                    it2 = setp.find(ii(grade[p.first],p.first));
                    setp.erase(it2);
                    grade[p.first]--;
                    setp.insert(ii(grade[p.first],p.first));
                }
            }
            happens  = false;
            total--;
            setp.erase(it);
        }
        if(setp.empty()) break;
        it = setp.end();
        --it;
        if(it->first < a || total - it->first - 1 < b ){
            exist[it->second] = false;
            for(int i = 0; i< adlist[it->second].size(); i++){
                ii p = adlist[it->second][i];
                if(exist[p.first]){
                    it2 = setp.find(ii(grade[p.first],p.first));
                    setp.erase(it2);
                    grade[p.first]--;
                    setp.insert(ii(grade[p.first],p.first));
                }
            }
            happens = false;
            setp.erase(it);
            total--;
        }
        if(happens) break;
    }
    printf("%d\n",total);
    return 0;
}
