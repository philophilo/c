#include <stdio.h>

struct point {
    int x;
    int y;
};

// using functions with structs
struct point addTwoPoints(struct point a, struct point b){
    struct point result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

int main()
{
    struct point a;
    a.x = 10;
    a.y = 5;
    struct point b = { 3, 8 };
    printf("point a, (%i,%i)\n", a.x, a.y);
    printf("point b, (%i,%i)\n", b.x, b.y);

    // using a pointer on a struct
    struct point *c = &b;
    // change the value of item
    c->x = 1;
    printf("point b now, (%i,%i)\n", b.x, b.y);

    // add two points
    struct point d = addTwoPoints(a,b);
    printf("point d, (%i,%i)\n", d.x, d.y);
    return 0;
}
