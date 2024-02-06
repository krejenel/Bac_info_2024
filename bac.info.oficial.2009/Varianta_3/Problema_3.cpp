#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x, fr[10000]= {0},ok=0,i,aux=0;
    while(f>>x)
    {
        if(x>100)
        fr[x]++;
        ok=1;
    }

    if(ok==0)
        cout<<"NU exista";
    else
    {
        for(i=100; i<10000; i++)
        {
            if(fr[i]!=0)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
