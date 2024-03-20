#include <iostream>

using namespace std;
int fr[10];

int main()
{
    int x,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        fr[x]++;
    }
    for(int i=0;i<=9;i++)
        while(fr[i]!=0)
        {
            cout<<i<<" ";
            fr[i]--;
        }
    return 0;
}
