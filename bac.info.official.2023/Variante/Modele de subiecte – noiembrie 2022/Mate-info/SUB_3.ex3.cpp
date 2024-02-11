#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{
    int x,i=1,n,stP=0,stI=0,ok=1;
    f>>n;
    while(f>>x)
    {
        if(i<=n)
        {
            if(x%2==0)
            {
                if(stP==0)
                    stP=x;
                else if(x<stP)
                    stP=x;
            }
            else
            {
                if(stI==0)
                    stI=x;
                else if(x<stI)
                    stI=x;
            }

        }
        if(i>n)
        {
            if(x%2==0)
            {
                if(stI==0)
                {
                    ok=1;
                }
                else if(stI>x)
                {
                    ok=1;
                }
                else
                {
                    ok=0;
                    break;
                }
            }

            if(x%2==1)
            {
                if(stP==0)
                {
                    ok=1;
                }
                else if(stP>x)
                {
                    ok=1;
                }
                else
                {
                    ok=0;
                break;
                }
            }
        }

        i++;

    }
    cout<<stP<<" ";
    cout<<stI<<" "<<endl;
    if(ok==0)
        cout<<"Nu";
    else cout<<"DA";

    return 0;
}
