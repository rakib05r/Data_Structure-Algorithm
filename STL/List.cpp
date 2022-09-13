#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++){
      cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
