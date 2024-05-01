#include<bits/stdc++.h>
using namespace std;

long long rev(long long x, long long k)
{
    int mul = 1;
    if(k==0)
    {
        return 1;
    }
    else if(k == 1)
    {
        return x;
    }
    for(int i=1; i<=k; i++)
    {
        mul = mul * x;
    }
    return mul;
}
int main()
{
    int T,i,j,X,K;
    long long sum = 0;
    
    cin>>T;
    
    for(i=0;i<T; i++)
    {
        cin>>X>>K;
        for(j=0; j<=K;j++)
        {
            sum = sum + rev(X,j);
        }
        cout<<"Result = "<<sum<<endl;
        sum = 0;
    }
}