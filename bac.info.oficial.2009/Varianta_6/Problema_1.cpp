#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char c[256];
    cin.get(c,255);
    int i;
    c[0]=c[0]-32;
    for (i=1; i<strlen(c); i++)
    {
        if (c[i]!=' '&&c[i-1]==' ')
            c[i]=c[i]-32;

    }
    cout<<c;

    return 0;
}
