#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, i, j;
    string s;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++) {
        getline(cin, s);
        int l = s.size();
        for(j = 0; j < l; j++) {
            if(s[j] == 'L')
            {
                s[j] = s[j-1];
            }
            else if(s[j] == 'R')
            {
                s[j] = s[j+1];
            }
        }
    cout<<s<<endl;
    }
}
