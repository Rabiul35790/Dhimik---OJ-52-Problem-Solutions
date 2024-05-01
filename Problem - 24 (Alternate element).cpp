#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,n,j,k;
    cin>>T;
    
    for(i=0;i<T;i++)
    {
        cin>>n;
        int a[n];
        for(j = 0; j<n; j++)
        {
            cin>>a[j];
        }
        for(j = 0; j<n; j=j+2)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}