#include <stdio.h>
#include <stdlib.h> // for abs()
#include <math.h>

int main()
{
    int a;
    float aroot;

    printf("type an interger: ");
    scanf("%d", &a);
    aroot = sqrt(abs(a));
    printf("the squeare root of %d is %f\n",
            a, aroot);
    return 0;
}
