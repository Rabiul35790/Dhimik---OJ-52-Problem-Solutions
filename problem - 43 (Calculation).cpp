#include<bits/stdc++.h>
using namespace std;

vector<int> dectobin(int x)
{
    vector<int> v;
    int bin;
    while(x != 0)
    {
        bin = x%2;
        v.push_back(bin);
        x = x/2;
    }
    return v;
}

int main()
{
    
    int p,q,c,T,i,j,t,mo;
    cin>>T;
    for(i = 0; i<T; i++)
    {
        cin>>p>>q>>c;
        vector<int> b = dectobin(q);
        int x = p;
        for(int j = b.size()-2; j>=0; j--)
        {
           if(b[j] == 0)
           {
                t = x*x;
                mo = t%c;
                x = mo;
           }
           else if(b[j] == 1)
           {
               t = x*x;
                mo = t%c;
                x = mo;
                t = x*p;
                mo = t%c;
                x = mo;
           }
        }
        cout<<"Result = "<<x<<endl;
    }
    
}