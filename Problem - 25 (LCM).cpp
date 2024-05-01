#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    int r;
    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}


int main()
{
    long long T,i,r1,r2;
    cin>>T;
    cin.ignore();
    for(i=0; i<T; i++)
    {
        cin>>r1>>r2;
        long long mul = r1*r2;
        long long gc = gcd(r1,r2);
        long long lcm = mul/gc;
        cout<<"LCM = "<<lcm<<endl;
    }
}