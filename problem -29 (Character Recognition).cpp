#include<bits/stdc++.h>
using namespace std;

int main()
{
    char in;
    int T,i,j;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        cin>>in;
        int as = (int)in;
        if(as >= 65 && as <= 90)
        {
            cout<<"Uppercase Character"<<endl;
        }
        else if(as >= 97 && as <= 122)
        {
            cout<<"Lowercase Character"<<endl;
        }
        else if(as >= 48 && as <= 57)
        {
            cout<<"Numerical Digit"<<endl;
        }
        else
        {
            cout<<"Special Characters"<<endl;
        }
    }
}