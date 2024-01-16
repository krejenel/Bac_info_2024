#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    char x;
    int fr[27]={0};
    while(f>>x)
    {
        if(isupper(x)!=0)
            x=tolower(x);
       fr[x-96]++;
    }
    int i;
    for(i=1; i<=27; i++)
    {
        if(fr[i]!=0 && fr[i]%2==1)
        {
            while(fr[i]!=0)
            {
                cout<<char(96+i)<<" ";
                fr[i]--;
            }
        }

    }

    return 0;
}
