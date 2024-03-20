#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            if(i==j || i+j==n+1)
                a[i][j]=0;
            else
            {
                if(i<j && i+j<n+1)
                    a[i][j]=1;
                if((i>j && i+j<n+1) || (i<j && i+j>n+1))
                    a[i][j]=2;
                if(i>j && i+j>n+1)
                  a[i][j]=3;
            }
        }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
