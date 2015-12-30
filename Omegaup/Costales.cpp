#include <bits/stdc++.h>
#define MAXN 30002
int n;
int naranjas[MAXN];
bool orangeph[10002];
bool costales[10002];
int conteo=0;
int main()
{
	scanf("%d",&n);
	int dato;
	for(int i = 0; i<n; i++)  scanf("%d",naranjas + i);
        
	int costalph;
	scanf("%d",&costalph);;
	for(int i = 1; i<=costalph; i++)
    {
        scanf("%d",&dato);
        costales[dato] = true; /// true = 1
    }
    for(int i = 0; i<n; i++)
    {
        if(orangeph[naranjas[i]]==false)
        {
       orangeph[naranjas[i]]=true;
            if(costales[naranjas[i]]==false)
            {
             conteo++;
            }
        }
    }
printf("%d",conteo);
	return 0;

}
