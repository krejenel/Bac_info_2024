
#include <iostream>

using namespace std;

void sub(int n, int k)
{
    int nr=n;
    for(int i=n*k;nr;i=i-k)
    {
        cout<<i<<" ";
        nr--;
    }
}

int main()
{
    sub(10,11);

    return 0;
}
