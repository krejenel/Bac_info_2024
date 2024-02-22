
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],n,p,k=1;
    cin>>n>>p;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=p;j++)
        {
            a[i][j]=k*k;
            k+=2;
        }
    for(int i=1;i<=n;i++, cout<<endl)
        for(int j=1;j<=p;j++)
        cout<<a[i][j]<<" ";
    return 0;
}
