#include <stdio.h>
#include <math.h>
#include <cstring>

int n,nn;
char s[100001];
char ss[100001];

int main()
{
    scanf("%s",s);
    scanf("%s",ss);

    n = strlen(s);
    nn = strlen(ss);

    if(n!=nn)
    {
        printf("NO");
        return 0;
    }

    int contador = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ss[i])
        {
            contador++;
        }
    }

    if(contador!=2)
    {
        printf("NO");
        return 0;
    }

    int p=-1;
    int pp;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ss[i])
        {
            if(p==-1)
            {
                p = i;
            }else
            {
                pp = i;
            }
        }
    }

    if(s[p]==ss[pp] && s[pp]==ss[p])
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
}
