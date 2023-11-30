//problema 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");


int main()
{
    int i,k=0;
    char s[100], c[100];
    f>>s;
    f>>c;
    cout<<s<<endl<<c<<endl;
    for(i=0; i<strlen(s); i++)
    {
        k=c[i]-'0';
        if(s[i]+k>'z')
            s[i]='a'-(s[i]+k-'z'-1);
        else
            s[i]=s[i]+k;

    }
    cout<<s;


    return 0;
}

//problema 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permuta(int n, int a[], int k)
{
    int i,j,aux=0;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(j=0; j<k; j++)
    {
        aux=a[0];
        for(i=0; i<n; i++)
        {
            if(i==n-1)
                a[i]=aux;
            else
                a[i]=a[i+1];
            }

    }
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

}

int main()
{
    int a[100];
    permuta(4,a,2);


    return 0;
}


//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");


int main()
{
    int frA[100]= {0};
    int x,i;
    int p=1,nr=1;
    while(f>>x)
    {
        while(p<=x)
        {
            if(x==p)
            {
                frA[nr]++;
                break;
            }
            else
            {
                p=p*10;
                nr=nr+1;
            }
        }
        nr=1;
        p=1;

    }
    for(i=1; i<=9; i++)
    {
        if(i==1)
            cout<<"1"<<" ";
        else if(frA[i]!=0)
        {
            cout<<pow(10,i-1)<<" ";
            frA[i]--;
            i--;
        }
    }


    return 0;
}
