#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string in;
    vector <string> v;
    cin>> T;
    for(int i=0; i< T; i++)
    {
        cin>>in;
        v.push_back(in);
    }
    for(auto &p : v)
    {
        string dig = p;
        if(dig[dig.length()-1] % 2 == 0){
            cout<< "even\n";
        }
        else{
            cout << "odd\n";
        }
        
    }
    
}