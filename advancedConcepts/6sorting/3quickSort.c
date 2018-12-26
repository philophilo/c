#include <stdio.h>
#include <stdlib.h> // for the qsort
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);

int main()
{
    int numbers[SIZE];
    int x;

    srand((unsigned)time(NULL));
    for(x=0;x<SIZE;x++)
        numbers[x] = rand() % 100 + 1;

    // initial array
    for(x=0;x<SIZE;x++)
        printf("%3d", numbers[x]);
    putchar('\n');

    // sorting 
    qsort(numbers, SIZE, sizeof(int), compare);

    // sorted array
    for(x=0;x<SIZE;x++)
        printf("%3d", numbers[x]);
    putchar('\n');
    
    return 0;
}

// arguments must be [const void] and also
// pointer type
int compare(const void *a, const void *b)
{
    // returned value is always an integer
    // when the returned value is negative, 
    // a and b will be swapped
    return( *(int *)a - *(int *)b );
}
