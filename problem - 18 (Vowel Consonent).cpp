#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;
    vector<char> c;
    string in;
    int i,T,j;
    cin>>T;
    cin.ignore();
    for(i=0; i<T; i++)
    {
        getline(cin, in);
        for(j=0;j<in.size(); j++)
        {
            if(in[j] == 'a' || in[j] == 'e' || in[j] == 'i' || in[j] == 'o' || in[j] == 'u')
            {
                v.push_back(in[j]);
            }
            else if(in[j] == ' ')
            {
                continue;
            }
            else
            {
                c.push_back(in[j]);
            }
        }
        for(auto &p : v)
        {
            cout<<p;
        }
        cout<<"\n";
        for(auto &p : c)
        {
            cout<<p;
        }
        cout<<"\n";
        v.clear();
        c.clear();
    }
}