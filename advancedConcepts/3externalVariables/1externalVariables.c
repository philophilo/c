#include <stdio.h>
#include "file.h"

void displayData(void);
void manipulateData(void);

extern int data[];

void displayData(void){
    int x;
    printf("Data set: \n");
    for(x=0; x<5; x++)
        printf("%2d\t", data[x]);
    putchar('\n');
}

void manipulateData(void){
    int x;
    for(x=0; x<5; x++)
        data[x] *= 2;
    puts("* Data manipulated *");
}
