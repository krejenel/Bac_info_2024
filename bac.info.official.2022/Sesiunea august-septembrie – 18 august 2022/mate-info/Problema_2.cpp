#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char cuvant[50];
    cin.get(cuvant,50);
    int i;
    for(i=0; i<strlen(cuvant); i++)
    {
        if(cuvant[i]!='a' && cuvant[i]!='u' && cuvant[i]!='o' && cuvant[i]!='e' && cuvant[i]!='e')
        {
            int ok=1;
            while(ok!=0)
            {
                cuvant[i]=cuvant[i]-1;
                if(cuvant[i]=='a' || cuvant[i]=='u' || cuvant[i]=='o' || cuvant[i]=='e' || cuvant[i]=='e')
                    ok=0;
            }
        }
    }
    cout<<cuvant;

    return 0;
}
