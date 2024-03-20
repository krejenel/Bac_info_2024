#include <iostream>

using namespace std;

int interval(int a[], int n)
{
    int k=0,x,y;
    if(x<y)
    {
        x=a[0];
        y=a[n-1];
    }
    else
    {
        x=a[n-1];
        y=a[0];
    }
    for(int i=0;i<n;i++)
        if(a[i]>=x && a[i]<=y)
            k++;
    return k;
}

int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<interval(a,n);
    return 0;
}
