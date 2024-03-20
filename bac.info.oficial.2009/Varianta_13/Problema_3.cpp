#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
ofstream fout("bac.out");

void p(int &n, int c)
{
    int aux=n,p=1;
    n=0;
    while(aux)
    {
        if(aux%10!=c)
        {
            n=n+aux%10*p;
            p*=10;
        }
        aux/=10;
    }
}

int main()
{
    int n,c,x;
    while(fin>>x)
    {
        for(int i=1; i<=9; i=i+2)
        {
            p(x,i);
        }
        if(x!=0)
            fout<<x<<" ";
    }

    fin.close();
    fout.close();
    return 0;
}
