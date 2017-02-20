#include <bits/stdc++.h>
#define MAXN 102
#define pb push_back
#define mp make_pair
using namespace std;
typedef struct{
    string s;
    int a;
    int b;
}ura;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<ura> vu;
string t;
int main(){
    int tc,k,n;
    ura trip;
    scanf("%d",&tc);
    while(tc--){
        vu.clear();
        cin >> n;
        while(n--){
            cin >> trip.s;
            cin >> trip.a;
            cin >> trip.b;
            vu.pb(trip);
        }
        
        int Q,cont,idx;
        scanf("%d",&Q);
        while(Q--){
            scanf("%d",&k);
            cont = 0;
            for(int i = 0; i<vu.size(); i++){
                if(min(vu[i].a,vu[i].b)<=k && max(vu[i].a,vu[i].b)>=k){
                    ///printf("Valores del intervalo = %d %d\n",vu[i].a,vu[i].b);
                    t = vu[i].s;
                    idx = i;
                    cont++;
                }
            }
            ///cout << vu[idx].s;
            cont == 1 ? cout << t  : cout<<"UNDETERMINED";
             printf("\n");
        }
        if(tc > 0)printf("\n");
    }
    return 0;
}
