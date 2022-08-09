#include<bits/stdc++.h>
using namespace std;
struct student{
    char name[50];
    int roll;
    int marks;
};
void print(char name[50],int roll,int marks){
    printf("Name: %s Roll: %d Marks: %d\n",name,roll,marks);
}
int main()
{

    struct student s={"Rokibul",140105,89};
    print(s.name,s.roll,s.marks);
    return 0;
}
