#include<bits/stdc++.h>
using namespace std;

string rev(string s)
{
    char temp;
    int l = s.size()-1;
    for(int i=0; i<s.size()/2; i++)
    {
        temp = s[i];
        s[i] = s[l];
        s[l] = temp;
        l--;
    }
    return s;
}
int main()
{
    int T,i,j;
    string s;
    cin>>T;
    cin.ignore();
    for(i=0;i<T; i++)
    {
        getline(cin, s);
        string reversed = rev(s);
        if(reversed == s)
        {
            cout<<"Yes! It is palindrome!"<<endl;
        }
        else
        {
            cout<<"Sorry! It is not palindrome!"<<endl;
        }
        
    }
}