#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
lli j ;
lli k,n,m;
int main(){
    cin >> n >> k;
    if(k % 2 == 1){
        puts("1");
        return 0;
    }
    j = n - 1;
    if(k & (k - 1 ) == 0){
        cout << k ;
        return 0;
    }
    while(j > 0 ){
        m = ( 1ULL << j );
        if( k % m  == 0) break;
        j--;
    }
    cout << j + 1 << "\n";
    return 0;
}
