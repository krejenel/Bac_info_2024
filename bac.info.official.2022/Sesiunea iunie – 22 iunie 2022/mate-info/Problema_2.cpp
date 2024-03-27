#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");


int main()
{
    int m,n,i,j,a[100][100],minim=999,nr=0;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 && j==1)
            {
                minim=a[i][j+1];
                if(a[i+1][j]<minim)
                    minim=a[i+1][j];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }

            }
            else if(i==1 && j==n)
            {
                minim=a[i][j-1];
                if(minim>a[i+1][j])
                    minim=a[i+1][j];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }

            }
            else if(i==m && j==1)
            {
                minim=a[i-1][j];
                if(minim>a[i][j+1])
                    minim=a[i][j+1];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }
            else  if(i==m && j==n)
            {
                minim=a[i-1][j];
                if(minim>a[i][j-1])
                    minim=a[i][j-1];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }
            else if(i==1)
            {
                minim=a[i][j-1];
                if(minim>a[i][j+1])
                    minim=a[i][j+1];
                if(minim>a[i+1][j])
                    minim=a[i+1][j];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }
            else if(j==1)
            {
                minim=a[i-1][j];
                if(minim>a[i][j+1])
                    minim=a[i][j+1];
                if(minim>a[i+1][j])
                    minim=a[i+1][j];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }
            else if(i==m)
            {
                minim=a[i][j-1];
                if(minim>a[i-1][j])
                    minim=a[i-1][j];
                if(minim>a[i][j+1])
                    minim=a[i][j+1];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }
            else if(j==n)
            {
                minim=a[i-1][j];
                if(minim>a[i][j-1])
                    minim=a[i][j-1];
                if(minim>a[i][j-1])
                    minim=a[i+1][j];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }

            }
            else
            {
                minim=a[i-1][j];
                if(minim>a[i+1][j])
                    minim=a[i+1][j];
                if(minim>a[i][j-1])
                    minim=a[i][j-1];
                if(minim>a[i][j+1])
                    minim=a[i][j+1];
                if(a[i][j]<minim)
                {
                    nr=nr+(minim-a[i][j]);
                    a[i][j]=minim;

                }
            }

        }
    }

    cout<<endl;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<nr;



    return 0;
}
