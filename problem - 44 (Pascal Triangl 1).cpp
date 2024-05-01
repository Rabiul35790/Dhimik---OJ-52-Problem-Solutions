#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,k,N;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N;
        for(j = 0; j<=N; j++)
        {
            int c = 1;
            for(k=0; k<=j;k++)
            {
                cout<<c<<" ";
                c = c * (j-k)/(k+1);
            }
            cout<<endl;
        }
        cout<<endl;
    }
}