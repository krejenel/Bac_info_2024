//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{
    int x,lg=1,y,maxx=0,nr=1;
    f>>x;
    y=x/100;
    while(f>>x)
    {
        if(y==x/100)
            lg++;
        else
        {
            if(lg>maxx)
            {
                maxx=lg;
                nr=1;
            }
            if(lg==maxx)
                nr++;
            lg=1;
        }
        y=x/100;
    }
    cout<<maxx<<" "<<nr;

    return 0;
}
