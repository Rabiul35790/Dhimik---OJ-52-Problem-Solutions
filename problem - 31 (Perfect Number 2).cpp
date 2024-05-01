#include<bits/stdc++.h>
using namespace std;
int perfect[] = {6, 28, 496, 8128, 33550336};
int main(){
    int T;
    int i,j;
    int n;
    vector<int> p;
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        cin>>n;
        for(j = 0; j<5;j++)
        {
            if(perfect[j] <= n)
            {
                p.push_back(perfect[j]);
            }
        }
        for(auto &x : p)
        {
            cout<<x<<endl;
        }
        cout<<endl;
        p.clear();
    }
}