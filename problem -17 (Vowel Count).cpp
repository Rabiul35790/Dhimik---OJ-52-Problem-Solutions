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
            if(in[j] == 'a' || in[j] == 'e' || in[j] == 'i' || in[j] == 'o' || in[j] == 'u')
            {
                count++;
            }
            
        }
        cout<<"Number of vowels = "<<count<<endl;
        count=0;
    }
}