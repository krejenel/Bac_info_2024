#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int S=0;
    int s1=0;
    int marime = 0;
    while(S <= k)
    {
        S+= (marime * (marime+1)) / 2;
        s1 += (marime * (marime-1)) / 2;
        marime++;
    }
    marime--;
    cout << marime - 1 << ' ';

    for(int i=1; i<=marime; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            if(s1 == k)
            {
                cout << i << ' ' << j;
                return;
            }
            s1++;
        }
        return 0;
    }
