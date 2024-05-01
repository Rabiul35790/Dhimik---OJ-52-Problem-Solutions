#include<bits/stdc++.h>
using namespace std;

string pn[] = {"6", "28", "496", "8128", "33550336", "8589869056", "137438691328", "2305843008139952128", "2658455991569831744654692615953842176"};

void solve() {
    int i;
    string n; cin>>n;
    for(i=0; i<9; i++){
        if(pn[i]==n){
            cout << "YES, " << n << " is a perfect number!\n";
            return;
        }
    }
    cout << "NO, " << n << " is not a perfect number!\n";
}

int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        solve();
    }
}