//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,aux=0,i=0;
    n=20;
    char s[201],*p;
    f.getline(s,201);
    p=strtok(s," ");
    while(p)
    {
        aux=aux+strlen(p);
        if(aux<=n)
        {
            cout<<p<<" ";
        }
        if(aux>n)
        {
            i=aux-strlen(p)+1;
            while(i<=n)
            {
                cout<<"*";
                i++;
            }
            cout<<endl<<p<<" ";
            aux=strlen(p);
        }
        aux=aux+1;

     p=strtok(NULL," ");
    }

    return 0;
} */

//problema 2
/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int regulat(int n)
{
    int i=0,x=0,y=0,z=0,c;
    for(i=n; i<=n; i--)
    {
        c=i;
        int ok=1;
        while(ok==1)
        {
            if(c%2==0 && c!=0)
            {
                x++;
                c=c/2;
            }
            else if(c%3==0 && c!=0)
            {
                y++;
                c=c/3;
            }
            else if(c%5==0 && c!=0)
            {
                z++;
                c=c/5;
            }
            else if(c%2!=0 && c%3!=0 && c%5!=0 && c!=0)
                ok=0;

        }
        if(pow(2,x)*pow(3,y)*pow(5,z)==i)
        {
            cout<<i;
            break;
        }
        x=0; y=0; z=0;
    }

}

int main()
{
    regulat(49);

    return 0;
} */

//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");


int main()
{
    int F[100]= {0};
    int x,aux=0,ok=0;
    int pozitie;
    f>>pozitie;
    while(f>>x)
    {
        F[x]++;
    }
    for(int i=0; i<100; i++)
    {
        if(aux==pozitie)
        {
            cout<<i;
            ok=1;
        }
        if(F[i]!=0)
        {
            aux++;
            F[i]--;
            i--;
        }
    }
    if(ok==0)
        cout<<"-1";

    return 0;
}
