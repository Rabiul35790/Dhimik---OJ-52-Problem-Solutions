#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j;
    string in;
    char temp;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        getline(cin,in);
        int last = in.size()-1;
        for(j = 0; j<(in.size()/2);j++)
        {
            temp = in[j];
            in[j] = in[last];
            in[last] = temp;
            last--;
        }
        cout<<in<<endl;
    }
}