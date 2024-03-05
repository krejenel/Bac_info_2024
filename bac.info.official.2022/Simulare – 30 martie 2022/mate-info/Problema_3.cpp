#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{

    int i,n,cinci=0, trei=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        int aux=i;
        while(aux%3==0 && aux!=0)
        {
            trei++;
            aux=aux/3;
        }
        while(aux%5==0 && aux!=0)
        {
            cinci++;
            aux=aux/5;
        }
    }

    cout<<cinci<<" "<<trei<<endl;
    int p=0;

    while(cinci>=1 || trei>=2)
    {
        cinci=cinci-1;
        trei=trei-2;
        p++;
    }
    cout<<p;

    return 0;
}
