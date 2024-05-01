#include<bits/stdc++.h>
using namespace std;



int main()
{
    int T;
    unsigned long long A,B,C,i,j,temp;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>A>>B>>C;
        for(j = A*B; j<= C; j = j + (A*B))
        {
           
                cout<<j<<endl;
            
        }
        cout<<endl;
    }
}