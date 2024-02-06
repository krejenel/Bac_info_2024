#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{
    int x,ok=1,p=1,d,s;
    f>>x;
    d=s=x;
    int pmax=0, pmin=0;
    while(f>>x)
    {
        p++;
        if(x<s)
        {
            s=x;
        }
        else if(x>d)
        {
            d=x;
        }
        else if(s<=x<=d && ok==1)
        {
            pmin=p;
            ok=0;
        }
        else if(s<=x<=d)
        {
            pmax=p;
        }
    }
    if(ok==1)
        cout<<"Nu esxista";
    else
        cout<<pmin<<" "<<pmax;

    return 0;
}
