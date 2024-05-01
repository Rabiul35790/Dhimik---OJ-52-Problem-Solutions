#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool> prime(N,1);

void seive()
{
    prime[0] = prime[1] = false;
    for(int i = 2; i*i<N; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*i; j<N; j = j+i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    seive();
    int T,l,u,count=0;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>l>>u;
        for(int j = l; j<=u; j++)
        {
            if(prime[j] == true)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
}