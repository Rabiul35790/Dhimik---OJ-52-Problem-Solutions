#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    string in,s;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++)
    {
        getline(cin, in);
        for(j=0;j<in.size(); j++)
        {
            if(in[j] != ' ')
            {
                s = s + in[j];
            }
            else
            {
                string rev = s;
                reverse(rev.begin(), rev.end()); 
                s.clear();
                cout<<rev<<" ";
            }
        }
        string re = s;
        reverse(re.begin(), re.end()); 
        s.clear();
        cout<<re<<" "<<endl;
    }
}