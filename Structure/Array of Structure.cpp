#include<bits/stdc++.h>
using namespace std;


typedef struct Student{
    int roll;
    char name[100];
}Student;

int main()
{
    Student st[10];
    int n,i;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th number student Roll:"<<endl;
        cin>>st[i].roll;
        cout<<"Enter "<<i+1<<"th number student Name:"<<endl;
        cin>>st[i].name;
    }
    for(i=0;i<n;i++){
        cout<<i+1<<"th number student Roll:"<<st[i].roll<<" Name: "<<st[i].name<<endl;
    }
    return 0;
}
