#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    int n1,n2,n3;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n1;
        int arr[n1];
        for(j=0; j<n1; j++)
        {
            cin>>arr[j];
        }
        cin>>n2;
        int arr2[n2];
        for(j=0;j<n2; j++)
        {
            cin>>arr2[j];
        }
        n3 = n1 + n2;
        int arr3[n3];
        for(j=0;j<n1;j++)
        {
            arr3[j] = arr[j];
        }
        int k = 0;
        for(j = n1; j<n3; j++)
        {
            arr3[j] = arr2[k];
            k++;
        }
        int f = sizeof(arr3)/sizeof(arr3[0]);
        sort(arr3, arr3 + f);
        for(j=0; j<n3; j++)
        {
            cout<<arr3[j]<<" ";
        }
        cout<<endl;
    }
}