#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a[3][5]={3, 6, 5, 4, 7, 9, 6, 12, 9, 10, 5, 13, 7, 2, 3 },minn=INT_MAX,maxx=0;
    //cin>>n>>m;
    n=5;
    m=3;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            //cin>>a[i][j];
            if(minn>a[i][j])
            minn=a[i][j];
        }
        
        if(maxx<minn)
        maxx=minn;
    }
    cout<<maxx;

    return 0;
}
