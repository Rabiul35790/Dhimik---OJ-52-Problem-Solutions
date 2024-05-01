#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,count = 1;
    long long n,j;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n;
        if(n!=2 && n%2 == 0)
        {
            cout<<n<<" is not a prime"<<endl;
            continue;
        }
        if(n==2){
            cout<<n<<" is a prime"<<endl;
            continue;
        }
        for(j = 3; j*j<=n; j=j+2)
        {
           if(n%j == 0)
           {
               count=0;
               break;
           }
        }
        if(count == 1)
        {
            cout<<n<<" is a prime"<<endl;
        }
        else
        {
            cout<<n<<" is not a prime"<<endl;
        }
        count = 1;
    }
}