#include<bits/stdc++.h>
using namespace std;

int power(int dig, int po)
{
    int k=1;
    for(int i=0; i<po; i++)
    {
        k = k * dig;
    }
    return k;
}
int main()
{
    int T,i,n,count=0;
    cin>>T;
    
    for(i=0;i<T;i++)
    {
        cin>>n;
        int d3 = n%10;
        int f = n/10;
        int d2 = f%10;
        int d1 = f/10;
        int am = power(d1,3) + power(d2,3) + power(d3,3);
        if(am == n)
        {
            cout<<n<<" is an armstrong number!"<<endl;
        }
        else
        {
            cout<<n<<" is not an armstrong number!"<<endl;
        }
        
    }
}