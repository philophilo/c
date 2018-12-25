#include <stdio.h>

int main()
{
    int number = 20;
    switch (number) {
        case 5:
            printf("it is 5 \n");
            break;
        case 10:
            printf("it is 10 \n");
            break;
        case 20:
            printf("it is 20 \n");
            break;
        default:
            printf("Default \n");
    }
    return 0;
}
