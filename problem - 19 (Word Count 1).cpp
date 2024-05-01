#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,count = 0;
    string in;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++)
    {
        getline(cin, in);
        for(j=0;j<in.size(); j++)
        {
            if(in[j] == ' ')
            {
                count++;
            }
        }
        count++;
        cout<<"Count = "<<count<<endl;
        count=0;
    }
}