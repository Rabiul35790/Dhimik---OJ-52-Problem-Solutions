#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,count=0;
    double X;
    cin>>T;
    
    for(i=0;i<T;i++)
    {
        cin>>X;
        while(X>1)
        {
            X/=2;
            count++;
        }
        cout<<count<<" days"<<endl;
        count=0;
    }
}