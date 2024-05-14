#include <iostream>
using namespace std;

int ogl(int x, int y, int &rez)
{
    int aux=0,auxx=0,p=1,q=1;
    while(x!=0 && y!=0)
    {
        if(x!=0)
        {
            if((x%10)%2==1)
            {
                aux=(x%10)*p+aux;
                p=p*10;
            }

            x=x/10;
        }
        if(y!=0)
        {
            if((y%10)%2==1)
            {
                auxx=(y%10)*q+auxx;
                q=q*10;
            }

            y=y/10;
        }
    }

    cout<<aux<<" "<<auxx<<endl;

    if(aux!=auxx)
    {
        int oglindit=0;
        while(aux!=0)
        {
            oglindit=oglindit*10+aux%10;
            aux=aux/10;
        }
        if(oglindit==auxx)
            rez=1;
        else
            rez=0;
    }
    return rez;
}

int main()
{
    int a=40,b=86,c=0;
    cout<<ogl(a,b,c);

    return 0;
}
