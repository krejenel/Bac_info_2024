#include <bits/stdc++.h>

using namespace std;
ifstream fin("nr.txt");

int main()
{
    int n;
    fin>>n;
    while(n>0)
    {
        cout<<n<<" ";
        n/=10;
    }
    return 0;
}
