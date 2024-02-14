#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int produs(int a, int b)
{
    int p=1,d;
    int aux=b;
    if(a>b)
        aux=a;
    for(d=1; d<=aux; d++)
    {
        if(a%d==0 && b%d==0)
             p=p*d;
    }
    return p;
}


int main()
{

    cout<<produs(12,20);

    return 0;
}
