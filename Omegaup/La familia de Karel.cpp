#include <cstdio>
#include <queue>
using namespace std;
int familia[100002];
int nivel[100002];
int cubeta[100002];
int fam;
int pos;
int padre_karel;
int actual;
int main()
{
  scanf("%d%d",&fam,&padre_karel);
  for(int i = 1; i<=fam; i++)
  {
      scanf("%d",&actual);
      if(familia[actual]==0)
      {
          familia[i]=actual;
          nivel[i]=nivel[i]+1;
          cubeta[nivel[i]]++;
      }else
      {
        familia[i]=actual;
        nivel[i]=nivel[actual] + 1;
        cubeta[nivel[i]]++;
      }
  }
printf("%d",cubeta[nivel[padre_karel]+1]);
	return 0;
}
