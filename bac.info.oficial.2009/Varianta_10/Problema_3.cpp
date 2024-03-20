#include <iostream>
#include <fstream>
using namespace std;
int fr[100];
struct
{
    int tip,kg,pret;
} x;

int main()
{
    ifstream fin("produse.txt");
    int maxim=0;
    while(fin>>x.tip>>x.kg>>x.pret)
    {
        fr[x.tip]+=x.kg*x.pret;
        if(maxim<x.tip)
            maxim=x.tip;
    }
    for(int i=0; i<=maxim; i++)
        if(fr[i]!=0)
            cout<<i<<" "<<fr[i]<<endl;

    return 0;
}
