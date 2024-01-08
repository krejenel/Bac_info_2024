#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,nr=0,memorie=0,pozitie=0;
    while(f>>x)
    {
        nr++;
        if(x%5==0)
        {
            memorie=x;
            pozitie=nr;
        }
    }
    cout<<memorie<<" "<<pozitie;

    return 0;
}
