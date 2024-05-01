#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,m,i,j;
    cin>>T;
    for(i=0;i<T; i++)
    {
        cin>>n>>m;
        for(j=1; j<=n;j++)
        {
            for(int k=1; k<=j; k++)
            {
                cout<<m<<" ";
            }
            cout<<endl;
        }
        for(j = (n-1); j>=1; j--)
        {
            for(int k = 1; k<=j; k++)
            {
                cout<<m<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        
    }
}