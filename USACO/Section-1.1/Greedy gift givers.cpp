/*
ID: mjayala2
LANG: C++
TASK: gift1
*/
#include <bits/stdc++.h>
using namespace std;
#define UPLOAD 1

#if UPLOAD
	#define openFiles() freopen("gift1.in", "r", stdin); freopen("gift1.out", "w", stdout)
#else
	#define openFiles()
#endif
map<string,int> people;
string s,anfitrion;
string safe[14];

int gente,money,part;
int main()
{
     openFiles();
    ///ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> gente;
    int termina = gente;
    for(int i = 0; i<gente; i++)
    {
        cin >> s;
        safe[i]= s;
        people[s] = 0;
    }
    while(gente--)
    {
        cin >>anfitrion;
        cin >> money>> part;
        int divide = 0;
        int mod = 0;
        if(part != 0)
        {
         divide = money / part;
            mod = money % part;
           
        }

        while(part--)
        {
            cin >> s ;
            people[s] +=divide;
         
            people[anfitrion]-=divide;
           
        }
    }
    for(int i = 0; i<termina; i++)
    {
        cout << safe[i];
        cout <<" ";
        cout << people[safe[i]];
        cout << "\n";
    }
	return 0;
}
