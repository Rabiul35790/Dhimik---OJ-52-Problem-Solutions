#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,n,in,count=0,count2=0;
    cin>>T;
    for(i=0;i<T; i++)
    {
        cin>>n;
        int num[n];
        for(j=0;j<n; j++)
        {
            cin>>num[j];
        }
        for(j=0; j<(n-1); j++)
        {
            if(num[j]<num[j+1])
            {
                count++;
            }
        }
        //cout<<count<<endl;
        
        for(j=0; j<n-1; j++)
        {
            if(num[j]>num[j+1])
            {
                count2++;
            }
        }
        
        if(count == (n-1) || count2 == (n-1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        count = 0;
        count2 = 0;
        
    }
}
