#include <stdio.h>
#include <stdlib.h>

void increment(int *a){
    // pointer must be in brackets
    (*a)++;
}

int main(){
    int b  = 10;
    int *a = &b;
    // a hold the refence of b
    // and not the value hence a warning 
    // in the execution
    printf("value of a is %i\n", a);
    // value of b
    printf("value of b is %i\n", b);

    // changing the value of b using the pointer
    *a = 5;
    printf("new value of b is %i\n", b);

    // pointer of a pointer
    // also changes the value of (b) the original
    // variable
    int **pointToA = &a;
    **pointToA = 40;
    printf("new value of b is %i\n", b);

    // parsing address/reference in a function 
    increment(&b);
    printf("incrementingb to %i\n", b);

    // using malloc function to create an array
    int size = 4; // declare number of "items"
    // malloc() is imported from the stdlib
    int *numbers = malloc(size * sizeof(int));
    numbers[0] = 10;
    numbers[1] = 2;
    numbers[2] = 8;
    numbers[3] = 2;
    printf("------malloc-----------\n");
    for (int i = 0; i < size; i++){
        printf("index: %i, value: %i\n", i, numbers[i]);
    }
    printf("---beyond array size---\n");
    // going beyond the size of the array...
    // lets the value stored there
    for (int i = 0; i <= size; i++){
        printf("index: %i, value: %i\n", i, numbers[i]);
    }

}
