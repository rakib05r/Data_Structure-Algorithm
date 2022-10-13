#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};
    int sum = 0, *p;
    for(p = &a[0]; p<&a[5]; p++){
        sum = sum+*p;
    }
    cout<<"SUM: "<<sum<<endl;
    return 0;
}
