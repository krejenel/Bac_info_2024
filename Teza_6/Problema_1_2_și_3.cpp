//problema 1
/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;

char s[100],*p;

int main()
{
    int v[100];
    int i=1;
    int nr=0;
    int n=0;
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        n++;
        nr=strlen(p);
        cout<<" cuvabntul "<<p<<" are dimensiunea de "<<nr<<endl;
        v[i]=nr;
        nr=0;
        i++;
        p=strtok(NULL," ");

    }
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
        int maxx=v[1];
    for(i=1; i<=n-1; i++)
    {
        if(v[i]<v[i+1])
            maxx=v[i+1];
    }
    cout<<endl;
    cout<<maxx;
    int nrr=0;
    for(i=1; i<=n-1; i++)
    {
        if(v[i]==maxx)
        nrr++
    }
        cout<<nrr;




    return 0;
} */

//problema 3
/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int p,s,i,suma=0,aux=0,auxx=0;
    f>>p;
    for(i=1; i<=p-1; i++)
    {
        suma=suma+i;
    }
    cout<<suma<<endl;

    while(f>>s)
    {
        for(i=1; i<=s/2; i++)
        {
            if(s==i*p+suma)
            {
                auxx=i;
                 aux=1;
                cout<<i<<" ";
            }
        }
        if(aux==0)
            cout<<"NU"<<" ";
        aux=0;
        auxx=0;

    }


    return 0;
} */

//problema 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void divizor(int n, int a[])
{
    int c=0;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n-1; i++)
    {
        a[i]=c;
        while(a[i+1]!=0)
        {
            int r=a[i]%a[i+1];
            a[i]=a[i+1];
            a[i+1]=r;
        }
        c=a[i];
    }
    cout<<c;

}

int main()
{
    int a[100];
    divizor(4,a);
    return 0;
}


