#include <iostream>
using namespace std;


int main ()
{
    int d, i = 2, k = 0, n, aux = 0, maxim = 0;

    cin >> n;

    while (i <= n)

    {
        d = 2;

        for (d = 2; d <= i; d++)

        {
            if (i % d == 0)
                k++;
        }

        if (maxim < k)

        {
            maxim = k;
            aux = i;
        }
        i++;
        k=0;
    }
    
    cout << maxim<<" "<<aux;
    return 0;
}
