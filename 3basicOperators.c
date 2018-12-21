#include <stdio.h>

int main()
{
    if (10 < 50) {
        printf("10 is smaller then 50\n");
    }
    if (5  > 10) {
        printf("5 is smaller than 10\n");
    }
    else if (10 < 15) {
        printf("10 is smaller than 15\n");
    }
    else{
        printf("Else \n");
    }
    return 0;
}
