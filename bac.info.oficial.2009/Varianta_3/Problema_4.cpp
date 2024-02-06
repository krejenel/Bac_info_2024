#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int cif(int &n, int &m)
{
    int nr=0,aux=0;
    aux=n;
    while(aux!=0)
    {
        if(aux%10==m)
            nr++;
        aux=aux/10;
    }
    return nr;
}

int main()
{
    int a,i,b=0,ok=0,numar=0,x=9,y=1;
    a=44997788;
    int fr[10]= {0};
    for(i=9; i>0; i--)
    {
        b=cif(a,i);
        if(b%2==1)
        {
            ok=1;
            break;
        }
        if(b%2==0 && b!=0)
        {
            while(b!=0 && x>y)
            {
                fr[x]=i;
                fr[y]=i;
                x--;
                y++;
                b=b-2;
            }
        }
    }

    if(ok==1)
        cout<<"0";
    else
    {
        for(i=1; i<=9; i++)
        {
            if(fr[i]!=0)
                numar=numar*10+fr[i];
        }
        cout<<numar;
    }

    return 0;
}
