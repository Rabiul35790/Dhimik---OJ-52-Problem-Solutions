#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,up,low,i,j,k;
    int count = 0,mcount = 0;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>low>>up;
        for(j = low; j<=up;j++)
        {
            int x = sqrt(j);
            for(k = 2; k<=x; k++)
            {
                if(j%k == 0)
                {
                    count++;
                    break;
                }
            }
            if(count == 0)
            {
                mcount++;
            }
            count = 0;
        }
        cout<<mcount<<endl;
        mcount = 0;
    }
}