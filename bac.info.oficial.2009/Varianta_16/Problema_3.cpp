#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");
int fr[10];

int main()
{
    int x;
    while(fin>>x)
    {
        while(x)
        {
            fr[x%10]++;
            x/=10;
        }
    }
    for(int i=9; i>=0; i--)
        while(fr[i]!=0)
        {
            cout<<i;
            fr[i]--;
        }
    return 0;
}

