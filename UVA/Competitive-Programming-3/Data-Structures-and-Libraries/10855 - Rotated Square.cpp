#include <bits/stdc++.h>
#define MAXN 1002
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
bool f,f2,f3,f4;
char big[MAXN][MAXN];
char m1[MAXN][MAXN];
char m2[MAXN][MAXN];
char m3[MAXN][MAXN];
char m4[MAXN][MAXN];
int rota[4];
 int n,m;
void newmat(char ma[MAXN][MAXN],char m2[MAXN][MAXN]){
    for(int i = 0,x = 0; i<m; i++,x++){
        for(int j = m - 1,y = 0; j>=0; j--,y++){
            m2[x][y] = ma[j][i];
        }
    }
}
void busca(){
    for(int i = 0; i<n - m + 1; i++){
        for(int j = 0; j<n - m + 1; j++){
            f = f2 = f3 = f4 = true;
            for(int k  = 0; k<m; k++){
                for(int t = 0; t<m; t++){
                    if(big[i + k][j + t] != m1[k][t]) f = false;
                    if(big[i + k][j + t] != m2[k][t]) f2 = false;
                    if(big[i + k][j + t] != m3[k][t]) f3 = false;
                    if(big[i + k][j + t] != m4[k][t]) f4 = false;
                    if(!f && !f2 && !f3 && !f4  ) break;
                }
                if(!f && !f2 && !f3 && !f4  ) break;
            }
            if(f) rota[0]++;
            if(f2) rota[1]++;
            if(f3) rota[2]++;
            if(f4) rota[3]++;
        }
    }
}
int main(){
   while( scanf("%d%d",&n,&m), n != 0 && m != 0){
        memset(rota,0,sizeof rota);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                scanf(" %c",&big[i][j]);
            }
        }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<m; j++){
                scanf(" %c",&m1[i][j]);
            }
        }
        newmat(m1,m2);
        newmat(m2,m3);
        newmat(m3,m4);
        busca();
        for(int i = 0; i<4; i++){
            if(i == 0)printf("%d",rota[i]);
            if( i > 0) printf(" %d",rota[i]);
        }
        printf("\n");
    }
    return 0;
}
