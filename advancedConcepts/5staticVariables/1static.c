#include <stdio.h>

void sample(void){
    static int x = 0;
    printf("value of x: %i\n", x);
    x++;
    printf("value of x: %i\n", x);
}

int main(){
    sample();
    sample();

    return 0;
}
