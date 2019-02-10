#include <stdio.h>

#define LENGTH 3

int data[LENGTH];

int main(int argc, char **argv){
    int *pi;
    int **ppi;

    printf("multipe indirectoin example\n");

    // initializinf the integer array
    for (int i = 0; i < LENGTH; i++ ){
        data[i] = i;
    }
    for (int i = 0; i < LENGTH; i++ ){
        printf("%d\n", data[i]);
    }

    // an array named by itself 
    // with no square[] brackets attached
    // is the same as a pointer
    // An array is an address
    pi = data;
    ppi = &pi;
    printf("values \npi: \t%p\nppi: \t%p\n", pi, ppi);

    for (int i = 0; i < LENGTH; i++){
        printf("Loop[%d] array address is %p\n", i, data);
        printf("item pointed to by pi: %i\n", *pi);
        pi++;
    }
}
