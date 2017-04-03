#include <bits/stdc++.h>
using namespace std;
#define INF 1ULL<<30
#define MAXN 1000000000000
#define pb push_back
#define mp make_pair
#define forn(r,a,b) for(int r = a; r<b; r++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second

typedef long long int lli;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> iiii;
typedef vector<iii> viii;
typedef vector<int> vi;
int probs[103][11];
bool solved[103][11];
bool ap[101];
vector<iii> contestants;
char line[10];
int main(){
   ////optimizar_io;
    int tc;
    scanf("%d",&tc); 
    getchar();
    getchar();
    while(tc--){
        char j;
        int ord = 1;
        iii sub;
        int c,p,t;
        memset(probs,0,sizeof probs);
        memset(ap,0,sizeof ap);
        memset(solved,false,sizeof solved);
        contestants.clear();
        while (gets(line) != NULL) {
            if(strlen(line) == 0){
                break;
            }
            sscanf(line,"%d %d %d %c",&c,&p,&t,&j);
            if(!ap[c]){
                sub.snd.snd = -c;
                ap[c] = true;
                contestants.pb(sub);
            }
            if(j == 'I'){
                probs[c][p]++;
            }
            if(j == 'C' && !solved[c][p]){
                probs[c][p]++;
                solved[c][p] = true;
                for(int i = 0; i<contestants.size(); i++){
                    if(-contestants[i].snd.snd == c){
                        contestants[i].fst++;
                        contestants[i].snd.fst += -(t + 20 * (probs[c][p]-1)); 
                    }
                }
            }
        }
        sort(contestants.begin(),contestants.end());
        reverse(contestants.begin(),contestants.end());
        for(int i = 0; i<contestants.size(); i++){
            cout << -contestants[i].snd.snd << " " << contestants[i].fst << " "<< -contestants[i].snd.fst<<"\n";
        }
        if(tc != 0){
            printf("\n");
        }
        
    }
    return 0;
}
