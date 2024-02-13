#include <bits/stdc++.h>

using namespace std;
int f(int a)
{
    bool f=false;
    int nr=0;
    for(int d=2; d<=a/2; d++)
    {
        if(a%d==0)
        {

            for(int i=2; i<d; i++)
            {
                if(d%i==0)
                    nr++;
                if(nr==0)
                    return d;
            }
        }

    }
    return 0;
}
int main()
{
    cout << f(45);

    return 0;
}
