//problema 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int maxim(int n, int m, int T[][30])
{
    int i,j,x=0,copie=0;
    int maxim=0,ok=1;
    for(i=1; i<=n; i++)
    {
        if(T[i][1]%2==1)
        {
            x=i;
            break;
        }
    }
    i=x;
    for(j=2; j<=m; j++)
    {
        copie=T[i][j];
        while(copie!=0 && ok==1)
        {
            if((copie%10)%2==0)
                ok=1;
            else
                ok=0;
            copie=copie/10;
        }
        if(ok==1 && T[i][j]>maxim)
        {
            maxim=T[i][j];

        }
        ok=1;
    }

        return maxim;
}

int main()
{
    int x, y, A[30][30];
    x=4;
    y=5;
    int i,j;
    for(i=1; i<=x; i++)
        for(j=1; j<=y; j++)
            f>>A[i][j];
    cout<<maxim(x,y,A);

    return 0;
}
