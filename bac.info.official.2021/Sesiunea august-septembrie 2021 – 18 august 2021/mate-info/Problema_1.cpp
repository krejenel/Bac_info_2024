#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void cub(int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<i*i*i<<" ";
        i++;
    }
}

int main()
{
   int x;
   x=5;
   cub(x);
   
    return 0;
}
