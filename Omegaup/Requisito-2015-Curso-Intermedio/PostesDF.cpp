#include <bits/stdc++.h>
using namespace std;
int k,n,minimo = INT_MAX,actual;
int postes[100002];
int main()
{
scanf("%d%d",&k,&n);
int fin = k ;
int inicio = 1;
for(int i = 1; i <=n; i++) scanf("%d",&postes[i]);
sort(postes,postes + n+1);
for(int i = 1; i<=n-k+1; i++)
{
    ///printf("%d %d %d\n",postes[fin],postes[inicio] ,postes[i]);
actual = postes[fin] - postes[inicio];
if(actual< minimo ) minimo = actual;
inicio++;
fin++;
}
printf("%d",minimo);
return 0;
}
