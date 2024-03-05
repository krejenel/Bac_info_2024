#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    char a[3][15];
    int j,i,ok=0;
    for(i=0; i<3; i++)
        for(j=0; j<14; j++)
            f>>a[i][j];

    for(i=0; i<3; i++)
    {
        for(j=0; j<14; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     for(j=1; j<12; j++)
     {
         if(a[2][j]==a[2][j+2]==a[1][j+1]==a[3][j+1])
            ok=1;
     }
    cout<<ok;

    return 0;
}
