#include <iostream>
using namespace std;

int Nrimp(int x, int y, int &nr)
{
    int i,d,div=0;
    nr=0;
    for(i=x; i<=y; i++)
    {
        for(d=1; d<=i; d=d+2)
        {
            if(i%d==0)
                div++;
        }
        if(div==3)
            nr++;
        div=0;
    }
    return nr;
}

int main()
{
    int a, b, c;
    a=4;
    b=50;
    cout<<Nrimp(a,b,c);
    return 0;
}
