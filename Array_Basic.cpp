#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,j,n;
    cout<<"Enter Array Size:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" Element"<<endl;
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<"Element: "<<endl<<i+1<<": "<<arr[i]<<endl;
    }
    return 0;
}
