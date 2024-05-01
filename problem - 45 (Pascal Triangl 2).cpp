#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,k;
    long long N;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N;
        for(j = 0; j<=N; j++)
        {
            long long c = 1;
            for(k=0; k<=j;k++)
            {
                cout<<c<<" ";
                c = c * ((long long)j-(long long)k)/((long long)k+1);
            }
            cout<<endl;
        }
        cout<<endl;
    }
}