#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int a[1000000],b[1000000],i,m,n,frA[1000000],x,frB[1000000];


void citire()
{
    f>>n>>m;
    cout<<n<<" "<<m<<endl;
    for(i=0; i<n; i++)
        f>>a[i];
    for(i=0; i<m; i++)
        f>>b[i];
}

void afisare()
{
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(i=0; i<m; i++)
        cout<<b[i]<<" ";
    cout<<endl;
}

void creare_vector_de_frecventa()
{
    for(i=0; i<n; i++)
    {
        x=a[i];
        frA[x]++;
    }
    cout<<"vectorul de frecventa pt a este : ";
    for(i=0; i<10; i++)
        cout<<frA[i]<<" ";
    cout<<"... si asa mai departe"<<endl;

    for(i=0; i<m; i++)
    {
        x=b[i];
        frB[x]++;
    }
    cout<<"vectorul de frecventa pt b este : ";
    for(i=0; i<10; i++)
        cout<<frB[i]<<" ";
    cout<<" ... si asa mai departe"<<endl;

}

int main()
{

    citire();
    afisare();
    creare_vector_de_frecventa();
    int aux=0;
    for(i=0; i<999999; i++)
    {
        if(frB[i]!=0)
        {
            if(aux==0 || frA[i]/frB[i]<aux)
                aux=frA[i]/frB[i];
        }
    }
    cout<<aux;

    return 0;
}
