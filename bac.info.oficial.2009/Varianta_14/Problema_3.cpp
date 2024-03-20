#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x,s=0,nr=0,i=1;
    while(fin>>x)
    {
        s=0;
        int aux=x;
        while(aux)
        {
            s+=aux%10;
            aux/=10;
        }
        if(s%2==0)
            nr++;
        if(i%5==0)
            cout<<x<<endl;
        else cout<<x<<" ";
        i++;
    }
    cout<<endl<<nr;
    return 0;
}
