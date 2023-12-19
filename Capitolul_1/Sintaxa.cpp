#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    x=5;
    y=6;
    if( x%2 )
        cout<<"se imparte exact";
    else
        cout<<"nu se inparte exact";
    cout<<endl;
    cout<<floor(1.7);
    cout<<endl;
    cout<<(float)6/5;
    cout<<endl;
    cout<<pow(6,5);
    cout<<endl;
    cout<<abs(-6.5);
    cout<<endl;
    cout<<sqrt(36); /* radical 2 */cout<<endl;
    cout<<cbrt(8); /*radical 3 */ cout<<endl;

    //OPERATORUL "?"
    int c=0;
    /*if(x==y)
        c=x+y;
    else c=0; */
    c=(x==y)?(x+y):0;
    cout<<c;
    cout<<endl;

    if((x<y)? true : false)
        cout<<"x este mai mic strict decat y";
    else cout<<"x nu este mai mic strict decat y";
    cout<<endl;

    //b=3 a=b+2
    x=(y=3,y=y+2);
    cout<<y<<endl;

    //partea intreaga
    float a=5.5;
    cout<<(int)a;
    cout<<endl;

    //y=y+2
    y+=2;
    cout<<y<<endl;

    //strge afisare pe compilator
    system("ClS");

    //interclasare
    int d,e;
    e=4;
    d=5;
    swap(e,d);
    cout<<e;


    return 0;
}
