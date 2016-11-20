#include <bits/stdc++.h>
using namespace std;
char car;
string s,t,ss,tt;
string inis,init;
int main(){
    while(!getline(cin,ss).eof()){
        inis.clear();
        init.clear();
        s.clear();
        t.clear();
        s.push_back(' ');
        t.push_back(' ');
        getline(cin,tt);
        s.append(ss.begin(),ss.end());
        t.append(tt.begin(),tt.end());
        int p = 0;
        while(p < s.size()){
            if(s[p] == ' '){
                inis.push_back(s[p+1]);
            }
            p++;
        }
        p = 0;
        while(p < t.size()){
            if(t[p] == ' '){
                init.push_back(t[p+1]);
            }
            p++;
        }
        init == inis ? puts("yes") : puts("no");
    }
return 0;
}
