#include <bits/stdc++.h>
#define MAXN 102
#define pb push_back
#define mp make_pair
using namespace std;
char cad[MAXN][MAXN];
string s;
int summ;
int ori,n,m,r,c,cadsize;
void mov(int  ori,int n,int m){
    if(cad[r][c] == '*') {
        summ++;
        cad[r][c] = '.';
    }
    ///printf("Suma funcion = %c\n",cad[r][c]);
    switch (ori){
        case 0:
            r--;
        break;
        case 1:
            c--;
        break;
        case 2:
            r++;
        break;
        case 3:
            c++;
        break;
    }
    //printf("Suma funcion 2 = %c\n",cad[r][c]);
    if(cad[r][c] == '#') {
        if(ori == 0) r++;
        if(ori == 1) c++;
        if(ori == 2) r--;
        if(ori == 3) c--;
    }
}
int main(){
        while(scanf("%d%d%d",&n,&m,&cadsize),n != 0 && m!= 0 && cadsize != 0){
        summ = 0;
        memset(cad,'#',sizeof(cad));
        s.clear();
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                scanf(" %c",&cad[i][j]);
                if(cad[i][j] == 'N'|| cad[i][j] == 'S' || cad[i][j] == 'L' || cad[i][j] == 'O'){
                    r = i,c=j;
                }
            }
        }
        cin >> s;
        if(cad[r][c] == 'N') ori = 0;
        if(cad[r][c] == 'S') ori = 2;
        if(cad[r][c] == 'L') ori = 3;
        if(cad[r][c] == 'O') ori = 1;
        for(int i  = 0; i<s.size(); i++){
            if(s[i] == 'F') mov(ori,n,m);
            else{
                s[i] == 'D' ? ori = (ori + 4 -  1) % 4 : ori = (ori + 1) %4 ;
            }
        }
        if(cad[r][c] == '*') {
            summ++;
            cad[r][c] = '.';
        }
        printf("%d\n",summ);
    }
    return 0;
}
