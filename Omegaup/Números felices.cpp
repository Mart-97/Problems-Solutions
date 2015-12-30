#include <stdio.h>
using namespace std;
	int n;
 	int s = 0;
 
 	int feliz = 0;
 	int times ;
 int main()
 {
 
 	scanf("%d",&n);
 	for(int i = 1; i<=8; i++)
 	{
 		for(n; n>0; n = n / 10)
 		{
 			s = s + (n % 10) * (n % 10);
 		}
 
 		if(s == 1){
            feliz = 1;
            times = i;
            break;
 		}
 
 		n = s;
 		s = 0;
 	}
 	if(feliz == 1)
 	{
 		printf("%d",times);
 	} else
 	{
 		printf("-1");
 	}
 	return 0;
 }
