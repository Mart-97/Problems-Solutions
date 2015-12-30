#include <bits/stdc++.h>
using namespace std;
int children,bags,candys,t = 0;
int main(){
scanf("%d%d",&children,&bags,&candys);
for(int i = 0; i < bags; i++)
{
	scanf("%d",&candys);
t+=candys;
}
printf("%d %d",t/children,t%children);
return 0;
}
