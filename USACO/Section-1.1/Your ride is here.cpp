/*
ID: mjayala2
LANG: C++
TASK: ride
*/
#include <cstdio>
#include<cstring>

using namespace std;
char cometa [27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char chain[73];
int tam,r=1,r2=1;
int main()
{
   FILE *fin  = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");

   fscanf(fin,"%s",chain);
   tam=strlen(chain);
   for(int i=0; i<tam; i++)
   {
       for( int j=0; j<26; j++)
       {
           if(chain[i]==cometa[j])
           {
             r=r*(j+1);
           }
       }
   }
  fscanf(fin,"%s",chain);
  tam=strlen(chain);
   for(int i=0; i<tam; i++)
   {
       for( int j=0; j<26; j++)
       {
           if(chain[i]==cometa[j])
           {
             r2=r2*(j+1);
           }
       }
   }
   if(r%47==r2%47) {
    fprintf(fout,"GO\n");
   } else
   {
       fprintf(fout,"STAY\n");
   }
    return 0;
}
