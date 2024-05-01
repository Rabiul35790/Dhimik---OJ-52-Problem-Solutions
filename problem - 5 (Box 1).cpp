#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in,T,i,j;
    vector<int>v;
    cin>>T;
    int count=0;
    for(i=0;i<T;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    
    for(auto &p : v)
    {
        count++;
        int k = p;
        for(i = 0; i<k;i++)
        {
            for(j=0; j<k;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        if(count!=T){
        cout<<"\n";
        }
    }
    
}