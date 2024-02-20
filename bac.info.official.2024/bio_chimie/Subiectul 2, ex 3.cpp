#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct exercitiul3
    {
        char prod[2];
        float pret;

    } x;
    cin.getline(x.prod,2);
    cin>>x.pret;
    if(x.prod[0]=='A')
        cout<<"Producator apple ";
    else cout<<"Prodcator samsung";
    cout<<endl<<x.pret;

    return 0;
}
