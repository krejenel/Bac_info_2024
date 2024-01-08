#include <iostream>
using namespace std;

int main()
{

    int a=82, b=567;
    int aux,nr=0;
    int copie;
    copie=a;
    while(copie)
    {
        if(copie/10<10)
            aux=copie;
        nr++;
        copie=copie/10;
    }
    cout<<"Numerele sunt "<<a<<" si "<<b<<" ,iar prima cifra a lui a este "<<aux<<"; a avand "<<nr<<" cifre"<<endl;
    int x=0;
    while(nr!=0)
    {
        nr--;
        x=x*10+1;
    }
    cout<<"Variabila x este "<<x<<endl; //scheletul prin care formam numerele din interval

    int numar=0;
    if(x*aux==a)
        numar=a;
    else if(aux*x<a)
    {
        if(aux+1<=9)
        {
            numar=x*(aux+1);
        }
        else
        {
            x=x*10+1;
            numar=x*aux;
        }
    }
    else
        numar=aux*x;
    //Primul nr din interval care respecta conditia este numar
    aux=aux+1;

    do
    {
        cout<<numar<<" ";
        if(aux<=9)
            numar=x*aux;
        if(aux>9)
        {
            aux=1;
            x=x*10+1;
            numar=x*aux;
        }
        aux=aux+1;
    }
    while(numar<=b);
    
    //programul este eficient deoarece nu verifica fiecare numar din interval; s-au folosit doar variabile simple

    return 0;
}
