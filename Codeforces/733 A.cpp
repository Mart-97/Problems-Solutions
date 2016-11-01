#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <climits>
#include <algorithm>
using namespace std;
char s[102];
vector<int> v;
int main(){
  scanf("%s",s);
  int t = strlen(s);
  v.push_back(0);
  for(int i = 0; i<t; i++){
    if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'  || s[i] == 'U' || s[i] == 'Y'){
      v.push_back(i + 1);
    }
  }
  v.push_back(t+1);
  int maximo = INT_MIN;
  for(int i = 0; i+1<v.size(); i++){
    maximo = max(maximo,v[i + 1] - v[i]);
  }
  printf("%d\n",maximo);
  return 0;
}
