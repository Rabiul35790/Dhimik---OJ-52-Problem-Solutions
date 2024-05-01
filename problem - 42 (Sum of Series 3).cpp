#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,n;
    cin>>T;
    for(i=0;i<T; i++)
    {
        cin>>n;
        for(j=n; j>=0;j--)
        {
            if(j == 1)
            {
                int x = 2 * 1;
                cout<<x<<" + ";
            }
            else if(j == 0)
            {
                cout<<pow(2,0)<<endl;
            }
            else
            {
            cout<<"2^"<<j<<" + ";
            }
        }
    }
}