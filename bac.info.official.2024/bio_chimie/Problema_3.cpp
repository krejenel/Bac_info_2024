#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n1,n2,ok=1;
    f>>n1>>n2;
    int x,fr[1001]={0},i;
    while(f>>x)
    {
        fr[x]++;
    }
    for(i=1000; i>=10; i--)
    {
        if(fr[i]>=n1 && ok==1)
        {
            cout<<i<<" ";
            ok=0;
        }
        else if(fr[i]>=n2 && ok==0)
        {
            ok=9;
            cout<<i;
            break;
        }
    }
    if(ok!=9)
        cout<<"nu exista";

    return 0;
}
