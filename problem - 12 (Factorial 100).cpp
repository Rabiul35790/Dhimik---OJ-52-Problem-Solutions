#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,T,N,sum=0,q;
    cin>>T;
    for(i = 0; i<T; i++)
    {
        cin>>N;
        while(N>=5)
        {
            q = N/5;
            sum += q;
            N = q;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    
}