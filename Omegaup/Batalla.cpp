#include <bits/stdc++.h>

using namespace std;
int maximo = INT_MAX * -1;
int n;
int lira[53];
int army[53];
int main() {
    scanf("%d",&n);
for(int i = 1; i<=n; i++)
                    scanf("%d",army + i);
for(int i = 1; i<=n; i++)
                    scanf("%d",lira + i);

sort(lira,lira+n+1);
sort(army,army+n+1);
int pos = 0;

long long int s = 0;
int k = n;
while(k--){
for(int i = 1; i<=n; i++)
{
    if(lira[i] < army[i + pos] && i + pos<=n)
        {
            s+=army[i + pos];
        }

}
 if(maximo < s) maximo = s;
        pos++;
        s = 0;
}
printf("%d",maximo);
    return 0;
}
