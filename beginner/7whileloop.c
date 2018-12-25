#include <stdio.h>
#include <stdbool.h> // using data type bool

int main(){
    int counter = 10;
    while (counter >= 0){
        printf("counter is %i\n", counter);
        counter--;
    }

    // loop terminated explictly by false
    bool x = true;
    while (x){
        counter = 0; // new value for the counter
        while (counter < 10){
            printf("%i\n", counter);
            x = false;
            counter++;
            // break; statement can also be used 
            // to break out of the loop
            // however, that breaks the inner cycle
            // the outter loop goes on
        }
        printf("x is now %d\n", x);
    }
    return 0;
}
