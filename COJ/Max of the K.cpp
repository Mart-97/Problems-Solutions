/* Implementación de un Segment Tree resolviendo Range Maximum Query*/
#include <cstdio>
#include <algorithm>
#include <climits>
#define MAXN 1000006

using namespace std;
int arr[MAXN];
int st[4*MAXN];

void build(int pos,int low,int high){
  if(low == high){
    st[pos] = arr[low];
    return;
  }
  int mid = (low + high) / 2;
  build(2 * pos + 1,low,mid);
  build(2 * pos + 2,mid + 1,high);
  st[pos] = max(st[2 * pos + 1],st[2 * pos + 2]);
}
int query(int pos, int low, int high, int i , int j){
  if(i > high || j < low) return INT_MIN;
  if(low >= i &&  high<=j) return st[pos];
  int mid = (low + high ) / 2;
  return max(query(2 * pos + 1,low,mid,i,j),  query(2 * pos + 2,mid + 1,high,i,j) );
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i = 1; i<=n; i++){
      scanf("%d",arr + i );
    }
      build(0,1,n);
      int ini = 1;
      int fin = k;
        while(fin<=n){
          int ans = query(0,1,n,ini,fin);
          printf("%d ",ans);
          ini++;
          fin++;
        }
        printf("\n");
        for(int i = 0; i<=4*n; i++){
          st[i] = INT_MIN;
        }
  }

  return 0;
}
