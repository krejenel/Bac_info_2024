#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

//culegere teza 1 subiectul 3

//prob 1 int nr,maxx;
//prob 2 int m,n,i,v[100],a[100],minim;
int i,v[100],n,nr; //prob 3

int prima(int n)
{
    if(n<10)
        return n;
    else
        while(n>=10)
        {
            n=n/10;
        }
        return n;
}


/*void numarare()
{
    f>>n>>m;
    for(i=1; i<=n; i++)
        f>>v[i];
    for(i=1; i<=m; i++)
        f>>a[i];;

}

void minimul()
{
    minim=a[1];
    for(i=1; i<=m-1; i++)
    {
        if(a[i++]>minim)
            minim=a[i++];
    }

}

void strict()
{
    int nr=0;
     for(i=1; i<=n; i++)
     {
         if(v[i]<minim)
        nr++;
     }
        cout<<nr;
}  */

int main()
{
    /* char s[100], *p;
     f.get(s,101);
     char c[101], *q;
     strcpy(c,s);
     cout<<c<<endl;
     q=strtok(c,"#");
     while(q)
     {
         nr=strlen(q);
         if(maxx<nr)
             maxx=nr;
         q=strtok(NULL,"#");

     }
     cout<<maxx<<endl;
     p=strtok(s,"#");
     while(p)
     {
         if(strlen(p)==maxx)
             strrev(p);
             cout<<"#"<<p;
             p=strtok(NULL,"#");
     }
    */

    /* numarare();
     for(i=1; i<=n; i++)
         cout<<v[i]<<" ";
     cout<<endl;
     for(i=1; i<=m; i++)
         cout<<a[i]<<" ";
     cout<<endl;
         minimul();
         strict(); */

// prob fazan

    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
        cout<<endl;
    int s=0;

    for(i=1; i<=n; i++)
    {
        if(v[i]%10==prima(v[i+1]))
            s++;
    }
    cout<<s;
    return 0;
}
