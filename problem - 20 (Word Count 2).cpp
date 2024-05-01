#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,count = 0,inv=0;
    string s;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        getline(cin,s);
        int l = s.size();
        for(j=0; j<l;j++)
        {
            if(int(s[j]) >= 97 && int(s[j]) <= 122)
            {
                s[j] = int(s[j]) - 32;
            }
            if(int(s[j]) == 39)
            {
                inv++;
            }
        }
        for(j=0; j<l;j++)
        {
            if(int(s[j]) >= 65 && int(s[j]) <= 90 && (s[j+1] < 65 || s[j+1] >90))
            {
                count++;
            }
        }
        count = count - inv;
        cout<<"Count = "<<count<<endl;
        count=0;
        inv = 0;
    }
}