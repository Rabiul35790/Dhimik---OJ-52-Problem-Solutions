#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,N,reversed =0;
    int mo;
    cin>>T;
    for(i = 0; i< T; i++)
    {
        cin>>N;
        while(N != 0)
        {
            mo = N%10;
            reversed = reversed * 10 + mo;
            N = N / 10;
        }
        cout<<reversed<<endl;
        reversed = 0;
    }
}