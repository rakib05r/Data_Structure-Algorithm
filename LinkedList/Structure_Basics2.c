#include<stdio.h>
struct point{
    int x;
    int y;
};

void print(struct point p){
    printf("X: %d Y: %d\n",p.x,p.y);
}

void printp(struct point *p){
    printf("X: %d Y: %d\n",p->x,p->y);
}

int main()
{
    struct point p1={56,63};
    struct point p2={566,663};
    print(p1);
    printp(&p2);
    return 0;
}
