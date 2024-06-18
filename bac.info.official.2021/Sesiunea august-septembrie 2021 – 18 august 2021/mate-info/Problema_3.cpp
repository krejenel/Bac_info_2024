#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int frA[100];
int frB[100];

int main()
{

    int na,nb,x,y,auxx=0,aux=0;
    f>>na>>nb;
    while(na)
    {
        f>>x;
        if(x>9)
        {
            aux=((x/10)%10)*10+x%10;
            frA[aux]++;
        }
        na--;
    }

    while(nb)
    {
        f>>y;
        if(y>9)
        {
            aux=((y/10)%10)*10+y%10;
            auxx=(y%10)*10+((y/10)%10);
            if(aux!=auxx)
            {
            frB[aux]++;
            frB[auxx]++;
            }
            else frB[aux]++;

        }
        nb--;
    }

    int nr=0;
    for(int i=0; i<=99; i++)
    {

            if(frA[i]*frB[i]>0)
            {
                nr=nr+frA[i]*frB[i];
            }
    }
    cout<<nr;

    return 0;
}
