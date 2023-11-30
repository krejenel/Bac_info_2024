//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int i=0,n=0,ok=0,etape=0,lg=0;
    char s[251];
    f>>s;
    n=strlen(s);
    while(i<n)
    {
        lg=i;
        while(s[lg]==s[lg+1] && lg+1<n)
            lg++;
        if(lg!=i)
        {
            strcpy(s+i,s+lg+1);
            i--;
            if(ok==0)
                etape++;
            ok=1;
        }
        else
        {
            i++;
            ok=0;
        }
    }
    cout<<s<<" "<<etape;

    return 0;
}*/

//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int perechi(int n, int m)
{
    int i,j,a,b,r,k=0;
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            a=i;
            b=j;
            while(b)
            {
                r=a%b;
                a=b;
                b=r;
            }
            if(i*j/a==m)
                k++;
        }
    }
    return k;
}

int main()
{
    cout<<perechi(6,6);

    return 0;
} */


//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int fr[19]= {0};
    int x,y=0,maxx=0;
    while(f>>x)
    {
        if(x<0)
            y=x*(-2)+1;
        else y=x;
        fr[y]++;
    }
    for(int i=0; i<=18; i++)
    {
        if(fr[i]!=0)
        {
            if(fr[i]>maxx)
                maxx=fr[i];
        }
    }
    for(int i=0; i<=18; i++)
    {
        if(fr[i]!=0)
        {
            if(fr[i]==maxx)
            {
                if(i<10)
                    cout<<i<<" ";
                else cout<<((i+1)%10)*(-1)<<" ";
            }
        }
    }



    return 0;
}
