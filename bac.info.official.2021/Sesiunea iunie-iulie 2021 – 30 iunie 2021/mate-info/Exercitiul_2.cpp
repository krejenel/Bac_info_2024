#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ok=0;
    cin>>n>>k;
    char x[20][10];
    int i,l;
    for(i=1; i<=n; i++)
    {
        cin>>x[i];
        l=strlen(x[i])-1;
        if(x[i][l]=='a' || x[i][l]=='e' || x[i][l]=='i' || x[i][l]=='o' || x[i][l]=='u')
            ok++;
    }
    if(k>ok)
        cout<<" NU exista";
    else
    {
        int l=0;
        i=1;
        while(k!=0 && i<=n)
        {
            l=strlen(x[i])-1;
            if(x[i][l]=='a' || x[i][l]=='e' || x[i][l]=='i' || x[i][l]=='o' || x[i][l]=='u')
                cout<<x[i]<<endl;
            i++;
            k--;
        }
    }

    return 0;
}
