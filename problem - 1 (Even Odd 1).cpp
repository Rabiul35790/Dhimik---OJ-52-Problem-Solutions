#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,in;
    vector <int> v;
    cin>> T;
    for(int i=0; i< T; i++)
    {
        cin>>in;
        v.push_back(in);
    }
    for(auto &p : v)
    {
        if(p%2==0){
            cout<<"even\n";
        }
        else{
            cout<<"odd\n";
        }
    }
    
}