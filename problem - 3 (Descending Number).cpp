#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int count = -1;
    for(i = 1000; i>=1; i--)
    {
        count++;
        if(count==5){
            
            cout<<"\n";
            count = 0;
        }
        cout<<i<<" ";
    }
    
}
