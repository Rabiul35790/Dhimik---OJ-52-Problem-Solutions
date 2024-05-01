#include<bits/stdc++.h>
using namespace std;

long long fac(long long x)
{
    int mul = 1;
    if(x==0)
    {
        return 1;
    }
    else if(x == 1)
    {
        return 1;
    }
    for(int i=2; i<=x; i++)
    {
        mul = mul * i;
    }
    return mul;
}
int main()
{
    int T,i,j,n;
    double sum = 0,d=1;
    cin>>T;
    cin.ignore();
    for(i=0;i<T; i++)
    {
        cin>>n;
        for(j=1; j<=n;j++)
        {
            d = (double)j/(double)fac(j);
            sum = sum + d;
        }
        printf("%.4lf\n",sum);
        sum = 0;
        d = 1;
    }
}