#include <stdio.h>

int main(int argc, char **argv){
    int x;

    printf("argc is %d\n", argc);
    printf("program name is %s\n", argv[0]);

    // printing all the argv
    for (x = 0; x < argc; x++ )
        printf("%2d: %s\n", x+1, argv[x]);

    return 0;
}
