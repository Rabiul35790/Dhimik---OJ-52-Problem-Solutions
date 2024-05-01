#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,X,i,j,mul=1;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>X>>N;
        if(N<=X)
        {
            cout<<"Invalid!"<<endl;
        }
        else
        {
            for(j=X; j<=N; j = X*mul)
            {
                cout<<j<<endl;
                mul++;
            }
        }
        cout<<endl;
        mul = 1;
    }
}