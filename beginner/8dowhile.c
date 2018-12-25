#include <stdio.h>
#include <stdbool.h>

int main(){
    bool x = true;
    int i = 10;
    do {
        // the do statement will always run
        // before the wile condition is 
        // executed
        printf("start loop %i\n", i);
        if (i == 5) 
            x = false;
        i--;
    }while(x);
    return 0;
}
