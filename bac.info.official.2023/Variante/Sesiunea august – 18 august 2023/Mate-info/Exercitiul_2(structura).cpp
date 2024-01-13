#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    struct produs
    {
        char denumire[20];
        int pret;

    }p;
    char a;
    cin>>p.denumire;
    cin>>p.pret;
    if(p.pret<100)
    {
        a=p.denumire[0];
    } else cout<<"*";


    return 0;
}
