#include <stdio.h>
#include <stdlib.h>

int main(){
    int *m;

    m = (int *)malloc(16 * sizeof(int));
    if(m == NULL)
        puts("Failes to allocate memory");
    else
        puts("storage for 16 integers allocated");

    return 0;
}
