#include<bits/stdc++.h>
using namespace std;

long long fac(long long x)
{
    long long mul=1;
    if(x == 1) return 1;
    if(x == 0) return 1;
    for(int i= 2; i<=x; i++)
    {
        mul = mul * i;
    }
    return mul;
}

int main()
{
    int T,i,j,count=0;
    string s,word;
    map<string, long long> cou;
    
    cin>>T;
    cin.ignore();
    for(i=0;i<T;i++)
    {
        getline(cin,s);
        int l = s.size();
        
        stringstream ss(s);
        while(ss>>word)
        {
            auto it = cou.find(word);
            if(it != cou.end())
            {
                it->second++;
            }
            else
            {
                cou[word]++;
            }
            count++;
        }
        
        long long upper = fac(count);
        long long lower = 1;
        for(auto it = cou.begin(); it != cou.end(); it++)
        {
            long long lof = fac(it->second);
            lower = lower * lof;
        }
        long long final = upper/lower;
        
        cout<<"1/"<<final<<endl;
        cou.clear();
        count=0;
    }
}