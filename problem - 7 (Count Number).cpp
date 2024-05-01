#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string in;
    int T,i;
    cin>>T;
    cin.ignore();
    for(i=0; i<T; i++)
    {
        getline(cin, in);
        v.push_back(in);
    }
    for(auto &p : v)
    {
        int count = 0;
        string c = p;
        for(i=0; i<c.size(); i++)
        {
            if(c[i] == ' ' && c[i+1] != ' ' && c[i+1] != '\0')
            {
                count++;
            }
        }
        if(c[0] != ' ')
        {
            count++;
        }
        cout<<count<<"\n";
    }
}