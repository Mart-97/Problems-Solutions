#include <bits/stdc++.h>
using namespace std;
int n,k;
int x[100002],y[100002];
int x1,z;
bool get ;
int main()
{
scanf("%d%d",&n,&k);
for(int i = 0; i<n; i++) scanf("%d""%d",&x[i],&y[i]);
	for(int i = 0; i<k; i++)
	{
		scanf("%d%d",&x1,&z);
		get = false;
		for(int j=0; j<n; j++)
		{
			if(x[j]==x1&&z==y[j]) get = true;
			if(get) break;
		}
		if(get)printf("0\n");
		else printf("1\n");
	}
return 0;
}
