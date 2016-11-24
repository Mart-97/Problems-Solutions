#include <bits/stdc++.h>

using namespace std;
int part,budg,hotels,w,price,avbeds;
int main(){
   int minimo;
   bool enough;
   while(scanf("%d%d%d%d",&part,&budg,&hotels,&w)!= EOF){
       minimo = INT_MAX;
       while(hotels--){
        scanf("%d",&price);
        enough = false;
        for(int i = 0; i<w; i++){
            scanf("%d",&avbeds);
            if(avbeds>=part && price * part<=budg) enough = true;
        }
        if(enough) minimo = min(minimo,price*part);
       }
       minimo != INT_MAX ? printf("%d\n",minimo): puts("stay home");
    }
return 0;
}
