#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
typedef long long int lli;
lli a[MAXN];
lli b[MAXN];
int main(){
  int n;
  lli suma  = 0 ,sumb = 0;
  scanf("%d",&n);
  for(int i = 1; i<=n; i++){
    scanf("%d",a + i);
    suma += a[i];
    scanf("%d",b + i);
    sumb += b[i];
  }  
  lli maximo;
  maximo = abs(suma - sumb);
  int sa = suma,sb = sumb;
  int index;
  for(int i = 1; i<=n; i++){
      sa -= a[i];
      sa+= b[i];
      sb -= b[i];
      sb += a[i];
      if(maximo < abs(sa - sb)){
        maximo = abs(sa - sb);
        index = i;
      }
      sa = suma;
      sb = sumb;
  }
  maximo == abs(suma - sumb) ? puts("0") : printf("%d",index);
  return 0;
}
