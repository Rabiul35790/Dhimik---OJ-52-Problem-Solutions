#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int in;
    vector <int> v;
    cin>> T;
    for(int i=0; i< T; i++)
    {
        cin>>in;
        v.push_back(in);
    }
    for(auto &p : v)
    {
        int dig = p;
        int last = dig % 10;
        while(dig>=10)
        {
            dig=dig/10;
        }
        int sum = dig+last;
        cout<<"Sum = "<<sum<<endl;
    }
    
}