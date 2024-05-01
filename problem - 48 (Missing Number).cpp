#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    int n;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        int arr[n-1];
        for(j=0; j<n-1; j++)
        {
            cin>>arr[j];
        }
        int f = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr+f);
        int found;
        for(j=0; j<n-1; j++)
        {
            if((j + 1) != arr[j])
            {
                found = j+1;
                break;
            }
        }
        cout<<found<<endl;
    }
}