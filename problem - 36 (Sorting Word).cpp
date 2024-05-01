#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, i, j;
    int n;
    string s;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++) {
        cin>>n;
        cin.ignore();
        std::vector<string> v;
        for(j=0; j<n; j++)
        {
            getline(cin,s);
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(auto &p: v)
        {
            cout<<p<<endl;
        }
        v.clear();
    }
}
