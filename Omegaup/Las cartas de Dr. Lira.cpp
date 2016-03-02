#include <cstdio>
#include<cstring>
using namespace std;
char chain [52],n,w=0,b=0;
int main(){
    scanf("%d",&n);
scanf("%s",chain);
int tam=strlen(chain);
for(int i =0 ; i<tam; i++)
{
    if(i%2==0)
    {
        if(chain[i]!='B')
        {
          b++;
        }
    } else
    {
        if(chain[i]!='W') b++;
    }
}
	w=n-b;
	if(b>w) printf("%d",w);
	if(w>=b) printf("%d",b);
	return 0;
}
