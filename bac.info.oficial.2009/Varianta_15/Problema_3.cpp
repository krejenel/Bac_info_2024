#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,aux=0,auxx=0,ok=1;
    while(f>>x)
    {
        if(x%2==1 && ok==1)
        {
            aux=x;
            ok=0;
        }
        else if(x%2==1 && ok==0)
        {
            auxx=x;
            ok=1;
        }
    }
    if(auxx*aux!=0)
        cout<<aux<<" "<<auxx;
    else
        cout<<"numere insuficiente ";

    return 0;
}
