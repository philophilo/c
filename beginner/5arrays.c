#include <stdio.h>

int main()
{
    int array[4] = {1,2,3,4};
    printf("array on index 0: %i\n", array[0]);

    // array element as variable 
    int variable = array[2];
    printf("variable: %i\n", variable);

    // inser into an array using variable
    array[3] = variable;
    printf("value at index 5: %i\n", array[3]);

    // string as a set of characters
    char chars[10] = "abcdefgh";
    printf("character %i: %c\n", 5, chars[5]);

    // print array of characters as string
    printf("%s\n", chars);
    return 0;
}
