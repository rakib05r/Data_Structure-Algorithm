#include<bits/stdc++.h>
using namespace std;

struct Car{
    char *name;
};

typedef struct MyCar{
    char *name;
}MyCar;

struct ABC{
    int x;
    int y;
};

int main()
{
    struct Car car1,car2;

    MyCar c;

    struct ABC a={.x=10,.y=20};
    c.name="MY CAR";
    car1.name="AUDI";
    car2.name="VOLVO";

    cout<<car1.name<<endl<<c.name<<endl<<car2.name<<endl;
    cout<<"X: "<<a.x<<" Y: "<<a.y<<endl;
    return 0;
}
