#include <stdio.h>

void ternaryInPrint(){
    int a, b;
    a = 5; b = 20;
    printf("%c is larger\n", 
            ( a > b ) ? 'a' : 'b' );
}

int main(){
    ternaryInPrint();
    return 0;
}
