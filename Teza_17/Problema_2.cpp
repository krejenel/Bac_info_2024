#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int termen(int n)
{
    int i=1;
    int x=3;
    int y=1;
    int ok=0;
    while(i<n)
    {
        if(y<x && ok==0)
        {
            cout<<y<<" ";
            i++;
            y++;
            if(i==n)
                break;
        }
        if(y==x)
        {
            cout<<y<<" ";
            i++;
           x=x+3;
            ok=1;
            y--;
             if(i==n)
                break;
        }
        if(y<x && ok==1)
        {
            cout<<y<<" ";
            i++;
            y--;
            if(i==n)
                break;
            if(y==1)
                ok=0;
        }
    }
    cout<<"| "<<y;
}

int main()
{
    termen(21);

    return 0;
}
