//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int ok,i=0;
    char aux[201];
    char s[201],*p;
    f.getline(s,201);
    p=strtok(s," ");
    while(p)
    {
        ok=0;
        strcpy(aux,p);
        for(i=0; i<strlen(aux); i++)
        {
            if(aux[i]<='9')
            {
                ok=1;
                break;
            }
        }
        if(ok==0)
        {
                strupr(aux);
                cout<<aux[0];
            }
            p=strtok(NULL," ");
        }

        return 0;
    } */


//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rotund(int n)
{
    int ok=1;
    int r=n%2;
    n=n/2;
    while(n != 0)
    {
        if(n%2==r)
        {
            ok=0;
            break;
        }
        else r=n%2;
        n=n/2;
    }
    if(ok==1)
        return 1;
    else return 0;

}

int main()
{
    rotund(18);
    return 0;
} */

//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,i=0;
    f>>n;
    int copie=n;
    while(n)
    {
        i++;
        n=n/10;
    }
    i=pow(10,i);
    int x;
    int aux=0;
    while(f>>x)
    {
        if(x%i==copie)
            aux=x;
    }
    cout<<aux;

    return 0;
}
