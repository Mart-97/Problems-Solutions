#include <bits/stdc++.h>
using namespace std;
int ren,col,r,c; ///Entradas
int original[1050][1050];
int submatriz[1000][1000];
int flags[1000][1000];
bool yes = true;
int avance;
int x = 0, y = 0;
void rellena()
{
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j<=c; j++)
		{
			flags[i+x][j+y] = 1;

		}
	}

}
void recorre()
{
 while(true){
yes = true;

	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j<=c; j++)
		{
			if(original[i+x][j+y] != submatriz[i][j])  yes = false;
            if(!yes) break;
		}
		if(!yes) break;
	}
	if(yes) rellena();
	if(x > ren-r+1) return ;

  y++;
 if(y>(col-c+1))
 {
     x++;
     y = 0;
 }
 }

}
int main(){
scanf("%d""%d",&ren,&col);
for(int i = 1; i <= ren; i++)
{
	for(int j = 1; j <= col; j++)
	{
		scanf("%d",&original[i][j]);
	}
}
scanf("%d""%d",&r,&c);
for(int i = 1; i <= r; i++)
{
	for(int j = 1; j <= c; j++)
	{
		scanf("%d",&submatriz[i][j]);
	}
}
recorre();
for(int i = 1; i <= ren; i++)
{
	for(int j = 1; j <= col; j++)
	{
		printf("%d ",flags[i][j]);
	}
	printf("\n");
}
return 0;
}
