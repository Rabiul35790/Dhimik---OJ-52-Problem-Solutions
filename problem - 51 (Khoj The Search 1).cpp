#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, i, j,pos;
    string s,s1;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++) {
        cin>>s>>s1;
        int x = s.size();
        int y = s1.size();
        for(j=0; j<x;j++)
        {
            if(s[j] == s1[0] && s[j+1] == s1[1] && s[j+y-1] == s1[y-1])
            {
                pos = j;
            }
        }
        cout<<pos<<endl;
    }
}
