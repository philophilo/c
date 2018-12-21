#include <stdio.h>
#include <stdbool.h>

int main()
{
    // declare without value
    int num;
    num = 500;
    // merge strin with interger to print
    printf("the number is : %i \n", num);
    int othernum = 50;
    // add the values
    int total;
    total = num + othernum;
    printf("the total is: %i \n", total);
    char character = 'A';
    printf("The char is equal to: %c\n", character);
    // character incremented by math operations "still numbers"
    char newChar = character + 1;
    printf("The new character is: %c\n", newChar);
    // increment a number
    ++total; // increment before
    printf("The total incremented before: %i\n", total);
    total++; // increment after
    printf("The total incremented after: %i\n", total);
    // decrement a number before
    --total; // decrement before
    printf("The total decremented before: %i\n", total);
    total--; // decrement after
    printf("The total decremented after: %i\n", total);
    // doubles
    double point = 2.5;
    double point2 = 5.3;
    point = point + point2;
    printf("Number is: %f\n", point);

    // using boolean variables... import <stdbool.h>
    bool x = true; // returned as 1
    bool y = false; // returned as 0
    printf("Boolean variable x = %d and y %d\n", x, y);
    return 0;
}
