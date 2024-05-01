#include<bits/stdc++.h>

using namespace std;


int main()
{
	int T,i,r1,r2,B;
    cin>>T;
    for(i=0; i<T; i++)
    {

        cin>>r1>>r2>>B;
        int ball = 300.0 - B;
        double current_rate = (r2*1.0/ball*1.0)*6.0;
        double req = (r1 - r2 + 1);
        double require_rate=0;

       	if(r1>=r2 && B!=0) {
            require_rate = (req*1.0/B)*6.0;
        }

        printf("%.2lf %.2lf\n", current_rate, require_rate);
    }
}
