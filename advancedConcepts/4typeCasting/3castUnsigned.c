#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int r;
    // selecting a random number
    // time get the unix std time
    // srand function requires 
    // unsigned long int value
    // the time function may also return
    // -ve value hence the (unsigned)
    srand((unsigned)time(NULL));
    r = rand();
    printf("%d is a random number\n", r);
    return 0;
}
