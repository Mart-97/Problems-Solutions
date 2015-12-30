#include <bits/stdc++.h>
using namespace std;
char turn [1009][1009];
int nums [1009][1009];
char turned [1009][1009];
int n,m,x,y;
void same()
{
    for(int i = 1; i <=n; i++)
 {
 	for(int j = 1; j <=n; j++)
 	{
       turned[i][j] = turn[i][j];
 	}
 	
 }
    
}
void first()
{
	x = 1;
	y = n;
 for(int i = 1; i <=n; i++)
 {
 	for(int j = 1; j <=n; j++)
 	{
       turned[x++][y] = turn[i][j];
 	}
 	y--;
 	x = 1;
 }
}

void two()
{
	x = n;
	y = n;
for(int i = 1; i <=n; i++)
 {
 	for(int j = 1; j <=n; j++)
 	{
       turned[x][y--] = turn[i][j];
 	}
 	y = n;
 	x--;
 }
}

void three()
{
	x = n;
	y = 1;
for(int i = 1; i <=n; i++)
 {
 	for(int j = 1; j <=n; j++)
 	{
       turned[x--][y] = turn[i][j];
 	}
 	x = n;
 	y++;
 }
}
int  main()
{
	scanf("%d",&n);
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=n; j++) scanf("%d",&nums[i][j]);

	}
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=n; j++) scanf(" %c",&turn[i][j]);

	}
	scanf("%d",&m);
	int mod = m % 4;
if(mod == 1) first();
	else
 		if(mod == 2) two();
		else if(mod == 3) three();
            else same();

for(int i = 1; i <=n; i++)
{
	for(int j = 1; j<=n; j++)
	{
		if(turned[i][j] == 'X') printf("%d ",nums[i][j]);
	}
}

	return 0;
}
