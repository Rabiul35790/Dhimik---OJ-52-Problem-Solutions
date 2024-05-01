#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    double a,b,c;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>a>>b>>c;
        double s = (a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %.3lf",area);
        cout<<endl;
    }
}