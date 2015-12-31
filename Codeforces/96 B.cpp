#include <stdio.h>
#include <math.h>

long long N;
long long x[12];
long long pos = 0;
long long suertudos[1000];

long long eleva(long long y,long long p)
{
    long long res = 1;
    for(long long i=0;i<p;i++)
    {
        res *= y;
    }
    return res;
}

long long convertirXaUnNumero()
{
    long long res=0;
    for(long long i=0;i<N;i++)
    {
        res += x[i] * eleva(10,N-i-1);
    }
    return res;
}

long long siXesSuperSuertudo()
{
    long long cuatros = 0;
    long long sietes = 0;

    for(long long i=0;i<N;i++)
    {
        if(x[i]==4)
        {
            cuatros++;
        }else
        {
            sietes++;
        }
    }

    if(cuatros==sietes)
        return 1;
    else
        return 0;
}


void recursion(long long p)
{
    if(p == 0)
    {

        if(siXesSuperSuertudo() == 1)
        {
            suertudos[pos] = convertirXaUnNumero();
            pos++;
        }
        return;
    }
    x[N-p]=4;
    recursion(p-1);
    x[N-p]=7;
    recursion(p-1);
}

int main()
{
    for(long long i=1;i<=10;i++)
    {
        N=i;
        recursion(N);
    }

    long long n;
    scanf("%I64d",&n);

    for(long long i=0;i<pos;i++)
    {
        if(suertudos[i] >= n)
        {
            printf("%I64d",suertudos[i]);
            break;
        }
    }
}
