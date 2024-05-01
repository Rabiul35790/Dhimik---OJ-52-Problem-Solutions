#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j;
    cin>>T;
    for(i=0; i<T; i++)
    {
        double Xc, Yc, X, Y, r;
        cin>>Xc>>Yc;
        cin>>r;
        cin>>X>>Y;
        double f = sqrt(pow(Xc-X, 2) + pow(Yc-Y,2));
        if(f>r)
        {
            cout<<"The point is not inside the circle"<<endl;
        }
        else if(r>f)
        {
            cout<<"The point is inside the circle"<<endl;
        }
        else
        {
            cout<<"The point is in Circumference"<<endl;
        }
        
    }
}