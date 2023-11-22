#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int n,a[100];

void problema3_15()
{
    int maxim=0,nr=0,num=0;
    for(int i=2; i<=n; i++)
        if(a[i]<a[i-1] && a[i]<a[i+1])
        {
            maxim=1;
            int k1=i,k2=i;
            int st=i-1;
            int dr=i+1;
            while(a[k1]<a[st] && a[k2]<a[dr])
            {
                k1=st;
                k2=dr;
                st--;
                dr++;
                maxim=maxim+2;
            }
            if(nr<=maxim)
                if(nr==maxim)
                    num++;
                else
                {
                    nr=maxim;
                    num=1;
                }

            i=dr;
        }
    if(num)
        cout<<nr<<" "<<num;
    else
        cout<<"NU EXIST";

}
int main()
{

    f>>n;
    for(int i=1; i<=n; i++)

        f>>a[i];
    problema3_15();


    return 0;
}
