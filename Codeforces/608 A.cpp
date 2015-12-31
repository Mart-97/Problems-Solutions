#include<cstdio>

using namespace std;
int passengers[1002];
int time[1002];
int n,topp;
int main(){

scanf("%d%d",&n,&topp);
for(int i = 1; i<=n; i++)
{
    scanf("%d%d",passengers + i,time + i);
}
int seconds = topp - passengers[n];
int wait;
wait = seconds - time[n];
if(wait<0) seconds += -(wait);
for(int i = n; i>=1; i--)
{
   seconds += passengers[i] - passengers[i - 1];
   wait = seconds -  time[i-1];
  if(wait<0)
   {
       seconds+= -(wait);
   }

}
printf("%d",seconds);
}
