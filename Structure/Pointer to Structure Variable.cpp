#include<bits/stdc++.h>
using namespace std;

typedef struct Student{
    int roll;
    string name;
}Student;

int main()
{
    Student s={1,"Rokibul Islam"};
    Student *ptr=&s;
    cout<<"Roll: "<<ptr->roll<<" Name: "<<ptr->name<<endl;
    return 0;
}
