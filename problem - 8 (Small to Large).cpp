#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,T,i,k,temp;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin >> n1 >> n2 >> n3;
        if(n1>n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n2>n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if(n1>n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        cout<<"Case "<<i<<": "<<n1<<" "<<n2<<" "<<n3<<"\n";
    }
}