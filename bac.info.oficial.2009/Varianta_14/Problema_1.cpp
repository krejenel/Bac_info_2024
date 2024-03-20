1.
#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],aux,k=0,j=1;
    cin>>n;
    aux=n;
    while(aux)
    {
        k++;
        aux/=10;
    }
    for(n; n>0; n/=10)
    {
        for(int i=1; i<=k; i++)
            a[i][j]=n%10;
        j++;
    }
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
