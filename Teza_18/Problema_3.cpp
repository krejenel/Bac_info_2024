void problema3()
{
    int x;
    while(f>>x)
    {
        while(x)
        {
            fr[x%10]++;
            x/=10;
        }

    }
    int maxim=0;
    int y, sum=0;
    for(int i=9; i>=0; i--)
    {
        sum=fr[i]+fr[i-2];
        if(maxim<sum && sum!=fr[i] && sum!=fr[i-2])
        {
            maxim=sum;
            x=i;
            y=i-2;
        }
    }
    long long r=0;
    while(fr[x])
    {
            r=r*10+x;
        fr[x]--;
    }
    while(fr[y])
    {
            r=r*10+y;
        fr[y]--;
    }
    cout<<r;



}

int main()
{
    problema3();
    return 0;
}
