//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int divprim(int n, int k, int v[])
{
    int i,div=0,nr=0;
    cin>>k;
    for(i=1; i<=k; i++)
        cin>>v[i];

    for(i=2; i<=n; i++)
    {
        for(int d=1; d<=i; d++)
        {
            if(i%d==0)
                nr++;
        }
        if(n%i==0 && nr==2)
        {
            div=i;
            break;
        }
        nr=0;
    }

    int ok=0;
    for(i=1; i<=k; i++)
    {
        if(v[i]==div)
            ok=1;
    }

    int x=0;
    if(ok==0)
    {
        for(i=1; i<=k; i++)
        {
            if(v[i]>k)
            {
                x=i;
                break;
            }
        }
        k++;

        for(i=k-1; i>=x; i--)
        {
            v[i+1]=v[i];
        }
        v[x]=div;
    }
}

int main()
{
    int v[100];
    divprim(27,4,v);

    return 0;
} */

//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char c[256];

int main()
{
    char o[2]=" ";
    char aux[50];
    char s[256], *p;
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        int q=strlen(p)/2;
        strncpy(aux,p,q);
        if(strcmp(aux,p+q)==0)
        {
            strcpy(p+q,"*");
        }
        strcat(c,p);
        strcat(c,o);

        p=strtok(NULL," ");
    }
    cout<<c;

    return 0;
} */

//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int maxx=0,x;
    while(f>>x)
    {
        if(x>=maxx)
            maxx=x;

    }
    cout<<maxx<<endl;
    for(int i=1; i<=maxx; i++)
    {
        if(pow(2,i)<=maxx && maxx<=pow(2,i+1))
        {
            cout<<"intervalul care il cuprinde pe "<<maxx<<" este de la 2^"<<i<<" si 2^"<<i+1;
        break;
        }
    }

    return 0;
}

