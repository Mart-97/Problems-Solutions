#include <cstdio>
#include <climits>
using namespace std;
 int n, m, k,inicio = 1,fin;
int views[50002];
int main()
{
scanf("%d%d",&n,&k);
for(int i = 1; i <= n; i++) scanf("%d",&views[i]);
fin = (n - ( n - k));
int maximo = INT_MAX ,moment ;
maximo *= - 1;
while(fin <= n)
{
   moment = views[fin] - views[inicio];
  if(moment > maximo) maximo = moment;
  inicio++;
  fin ++;
}
printf("%d\n",maximo );
return 0;
}
