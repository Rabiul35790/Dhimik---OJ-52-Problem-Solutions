#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long A,B,C,j,find;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>A>>B>>C;
        if(A%C == 0){
            for(j=A; j<=B; j = j + C)
            {
                cout<<j<<endl;
            }
        }
        else
        {
            A = A - (A%C);
            for(j=A+C; j<=B; j=j+C)
            {
                cout<<j<<endl;
            }
        }
        cout<<endl;
    }
}