#include<bits/stdc++.h>

using namespace std;

long long int fac(long long int a)
{
    if(a == 1){
        return 1;
    }
    else{
    long long int mul=1,i;
    for(i = a; i>1; i-- ){
        mul = mul*i;
    }
    return mul;
    }
}

int main()
{
	int T,i,num;
    long long int fact;
    cin>>T;
    for(i=0; i<T; i++)
    {
        cin>>num;
        fact = fac(num);
        cout<<fact<<endl;
    }
    
}