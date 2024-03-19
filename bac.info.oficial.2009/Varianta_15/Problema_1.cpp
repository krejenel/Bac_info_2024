#include <iostream>

using namespace std;

int main()
{
    int i=1,j=1,a[100][100],n,c,aux;
    n=6;
    c=234567;
    aux=c%10;
    c=c/10;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
                a[i][j]=0;
            else if(i==1)
                a[i][j]=aux;
            else if(i>j)
            {
                if(i==j+1)
                    a[i][j]=a[i-1][j+1];
                else
                    a[i][j]=a[i-1][j];
            }
            else if(i<j)
                a[i][j]=aux;
        }
        aux=c%10;
        c=c/10;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
