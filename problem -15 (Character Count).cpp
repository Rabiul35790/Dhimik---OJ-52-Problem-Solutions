#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>v;
    int count = 0;
    string in;
    int i,T,j,k,l,take=0;
    cin>>T;
    cin.ignore();
    for(i=0; i<T; i++)
    {
        getline(cin, in);
        for(j=0;j<in.size(); j++)
        {
            for(l=0;l<v.size();l++)
            {
                if(in[j] == v[l])
                {
                    take++;  // for avoiding same character multiple time
                }
            }
            
            if(in[j] != ' ' && take==0)
            {
                for(k = 0; k<in.size(); k++)
                {
                    if(in[j] == in[k])
                    {
                        count++; // if find same character count updated
                    }
                }
                v.push_back(in[j]); // for tracking character is already printed or not
                cout<<in[j]<<" = "<<count<<endl;
                count=0;
            }
            take=0;
        }
        if(i != (T-1)){
        cout<<endl;
        }
        v.clear();
    }
}