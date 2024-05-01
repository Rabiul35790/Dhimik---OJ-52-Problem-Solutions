#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j,k;
    string in;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        getline(cin, in);
        for(j = 0; j<in.size(); j++)
        {
            int asc = (int)in[j];
            if(asc > 95)
            {
                asc = asc - 70;
            }
            else
            {
                asc = asc - 64;
            }
            cout<<asc;
        }
        cout<<endl;
    }
}