#include<bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    char c;
    int T,i,j,count=0;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        getline(cin, in);
        cin>>c;
        cin.ignore();
        for(j=0;j<in.size();j++)
        {
            if(in[j] == c)
            {
                count++;
            }
        }
        if(count == 0)
        {
            cout<<"'"<<c<<"' is not present"<<endl;
        }
        else{
        cout<<"Occurrence of '"<<c<<"' in '"<<in<<"' = "<<count<<endl;
        }
        count=0;
    }
}