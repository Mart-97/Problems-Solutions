#include <bits/stdc++.h>
using namespace std;
map <char,int> led;
int main(){
    int n;
    string s;
    led['0'] = led['6'] = led['9'] = 6;
    led['1'] = 2;
    led['2'] = led['3'] =  led['5'] =  5;
    led['4'] = 4;
    led['7'] = 3;
    led['8'] = 7;
    scanf("%d",&n);
    while(n--){
        int acum = 0;
        cin >> s;
        for(int i = 0; i<(int)s.size(); i++){
            acum+=led[s[i]];
        }
        printf("%d leds\n",acum);
    }

return 0;
}
