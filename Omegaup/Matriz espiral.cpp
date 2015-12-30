#include <stdio.h>
#define MAXN 1002
#define MAXM 1002
int matriz[MAXN][MAXM];
	int m,n;
int main()
{
		 int iniciocol = 0;
		int inicioren = 0;
		int i = 0, j = 0;
		int pos = 1;
	scanf("%d%d",&n,&m); //Lectura de variables de entrada
	int fincol = m - 1;
int finren = n - 1;
///Poner matriz en ceros
for(int i = 0; i<n; i++)
{
  for(int j = 0; j<m; j++) matriz[i][j] = 0;
}
	  while(pos <= n * m)
      {
      	///Recorrido por primera  fila superior vacia
          for( j = iniciocol; j< fincol; j++)
          {
          	////Verificamos si la casilla esta en ceros, si lo está, podemos seguir creando la espiral en la misma
             if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          ///Recorrido por la ultima columna vacia
          for( i = inicioren; i < finren; i++)
          {
           if(matriz[i][j]== 0)	////Verificamos si la casilla esta en ceros, si lo está, podemos seguir creando la espiral en la misma
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          ///Recorrido por la ultima fila vacia
           for( j = fincol; j >=iniciocol; j--)
          {
          	////Verificamos si la casilla esta en ceros, si lo está, podemos seguir creando la espiral en la misma
          	 if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          j = iniciocol;
          ///Recorrido por la primera columna vacia
          for( i = finren ; i >=inicioren; i--)
          {
  ////Verificamos si la casilla esta en ceros, si lo está, podemos seguir creando la espiral en la misma
           if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
///Actualizamos las variables a conveniencia, nos sirven para ir aumentando nuestro limite de recorrido en la matriz, tanto filas como columnas
          inicioren++;
          	iniciocol++;
          		finren--;
          		fincol--;
            		i = inicioren;
            		j = iniciocol;
      }

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
 return 0;
}
