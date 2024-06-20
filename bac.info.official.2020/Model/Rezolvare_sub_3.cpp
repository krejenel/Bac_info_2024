#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

/* PROBLEMA 1
int duplicare(int n, int d)
{

    int p=1,ok=0;
    while(n!=0)
    {
        int aux=n%10;
        if(aux%2==1)
        {
            ok=1;
            d=(aux*10+aux)*p+d;
            p=p*100;

        }
        else
        {
            d=aux*p+d;
            p=p*10;
        }

        n=n/10;
    }
    if(ok==1)
        return d;
    else return -1;

} */


int main()
{

   /* PROBLEMA 2
    int n,nr=0,nrr=0;
    cin>>n;
    cin.get();
    char text[101];
    cin.getline(text,101);

    char aux[101][101];
    char*p;
    p=strtok(text," ");
    int i=0;
    while(p)
    {
        strcpy(aux[i],p);
        i++;
        p=strtok(NULL, " ");
    }

    int m=i;
    cout<<m<<endl;
    int v[50];
    for(i=0; i<m; i++)
    {
        v[i]=strlen(aux[i]);
        if(strlen(aux[i])>=n)
            nr++;
        else nrr++;
    }

    if(nr==m || nr==0)
        cout<<"NU EXISTA";
    else
    {
        for(i=0; i<m; i++)
            for(int j=0; j<m-1; j++)
                if(v[j]<v[j+1])
                    swap(v[j],v[j+1]);

        for(i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(v[i]==strlen(aux[j]))
                {
                    cout<<aux[j]<<endl;
                }

            }
            while(v[i+1]==v[i])
                i++;
        }
    }
    */

    //PROBLEMA 3
    int x,y,nr=0;
    f>>x;
    while(f>>y)
    {
        if(x!=y)
            nr=nr+(x-y);
        x=y;
    }
    nr=nr+(x-1);
    cout<<nr;

    return 0;
}
