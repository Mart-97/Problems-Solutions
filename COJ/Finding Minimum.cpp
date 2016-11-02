#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;
typedef long long int lli;
int st[4*MAXN];
int arr[MAXN];
int n,q;
void build( int pos, int lo, int hi){
  if(lo == hi){
    st[pos] = arr[lo];
    return;
  }else{
    int mid = (lo + hi ) / 2;
    build(2*pos,lo,mid);
    build(2*pos+1,mid + 1,hi);
    int izq = 2*pos;
    int der = 2*pos+1;
    st[pos] = min(st[izq],st[der]);
  }
}
int query(int pos,int lo, int  hi, int i,int j){
  if(i > hi || j < lo) return INT_MAX;
  if(lo >= i && hi<=j) return st[pos];
  int mid = (lo + hi) / 2;
  return min(query(2*pos,lo,mid,i,j),query(2*pos+1,mid+1,hi,i,j));
}
int query(int i, int j){
  return query(1,1,n,i,j);
}
int main(){
  scanf("%d",&n);
  for(int i = 1; i<=n; i++){
    scanf("%d",arr + i);
  }
  build(1,1,n);
  scanf("%d",&q);
  while(q--){
    int i,j;
    scanf("%d%d",&i,&j);
    printf("%d\n",query(min(i,j),max(i,j)));
  }  
  return 0;
}
