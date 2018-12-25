#include <stdio.h>

int main(int argc, char **argv)
{
    // prints the number of arguments
    // parsed
    printf("argc is %d\n", argc);
    // prints the first arguments
    // the first is always the name of
    // the program being executed
    printf("program name is %s\n", argv[0]);

    return 0;
}
