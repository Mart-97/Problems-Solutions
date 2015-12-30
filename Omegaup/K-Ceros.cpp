#include <cstdio>
#include <map>
#define MAXN 80000000015
using namespace std;
long long  int m,medio;
long long int contador = 0;
  long long  int cantidad;
/*int fiveSerie()
{
   for(long long int  i = 5; i <= MAXN; i+=5)
   {
       contador++;
   }
    printf("%lld",contador );
    return 0;
}
*/
long long int  zeros(long long int d){

long long int res;
long long int c = 0;
 while(d!=0){
      res=d/5;
      c+=res;
      d=res;

    }
    return c;
}
map <int,int> mapa;

int main()
{
    scanf("%lld",&m);
    //fiveSerie();
    long long int inicio = 0;
   long long int fin = MAXN;

  while(inicio < fin)
  {
        medio = (inicio + fin) / 2;
  cantidad = zeros(medio);

 if(cantidad == m)
           {
              medio = medio - medio % 5;

           printf("%lld",medio);
               return 0;
              }
      if( cantidad < m)
      {
          if(cantidad + 1 == m) {
                medio = medio - medio % 5;
            printf("%lld",medio + 5);
            return 0;
          }
          inicio = medio - 1;

      } else
      {
          if( cantidad > m)
          {
              fin = medio + 1;
          }

      }
  }
    return 0;
}
