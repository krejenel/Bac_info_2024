#include <fstream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int fr[10000];
int main()
{
    int x,y,z;
    while(f>>x>>y>>z)
        fr[x]+=y*z;
    for(int i=1;i<=10000 && fr[i]; i++)
    cout<<i<<" "<<fr[i]<<endl;

    return 0;
}
