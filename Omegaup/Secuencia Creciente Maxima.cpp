#include <bits/stdc++.h>

using namespace std;
int n;
int  nums[1002];
int k = 0,m,maximo = INT_MAX * -1,actual ,p ;
int main()
{
	scanf("%d",&n);
	for(int i = 1; i<=n; i++)
	{
		scanf("%d",&m);
		if(k < m)
		{
		    k = m;
		 nums[i] += nums[i - 1] + 1;
		 actual = nums[i];
   		if(actual > maximo) {
   			maximo = actual;
   			///printf("%d %d\n",maximo,actual);
   			p = i;
   		}
		}  else
		{
		    k = m;
		    nums[i] = 1;
		}
	}
 printf("%d %d",maximo,p - maximo + 1);
	return 0;
}
