#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i+j==n+1)
                a[i][j]=0;
            else
            {
                if(i+j<n+1)
                    a[i][j]=j;
                else a[i][j]=n-i+1;
            }
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
