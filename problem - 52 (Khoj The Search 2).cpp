#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, i, j,flag=0,count=0;
    string s,s1;
    cin>>T;
    cin.ignore();
    for(i = 0; i < T; i++) {
        cin>>s>>s1;
        int x = s.size();
        int y = s1.size();
        for(j=0; j<x;j++)
        {
            if(s[j] == s1[0])
            {
                
                for(int k =0;k<y;k++)
                {
                    if(s[j+k] == s1[k])
                    {
                        flag++;
                    }
                    
                }
            }
            if(flag == y)
            {
                count++;
                
            }
            flag=0;
        }
        cout<<count<<endl;
        count = 0;
    }
}
