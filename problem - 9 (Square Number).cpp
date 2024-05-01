#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,T,i,k,temp;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>n1;
        int squart = sqrt(n1);
        int mul = squart * squart;
        if(mul == n1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}