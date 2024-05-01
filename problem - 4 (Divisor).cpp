#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int T,in, i,j;
    cin>>T;
    int count = 0;
    for(i=0;i<T;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    for(auto &p : v)
    {
        count++;
        cout<<"Case "<<count<<": ";
        int d = p/2;
        for(j = 1; j<=d; j++)
        {
            if(p%j==0)
            {
                cout<<j<<" ";
            }
        }
        cout<<p<<endl;
    }
    
}