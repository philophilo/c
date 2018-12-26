#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int numbers[SIZE];
    int x, outer, inner, temp;

    srand((unsigned)time(NULL));
    for(x=0;x<SIZE;x++)
        numbers[x] = rand() % 100;

    // initial array
    for(x=0;x<SIZE;x++)
        printf("%3d", numbers[x]);
    putchar('\n');

    // bubble sort
    for(outer=0; outer<SIZE; outer++)
        for(inner=outer+1; inner<SIZE; inner++)
        {
            if( numbers[outer] > numbers[inner] )
            {
                temp = numbers[inner];
                numbers[inner] = numbers[outer];
                numbers[outer] = temp;
            }
        }

    // sorted array
    for(x=0;x<SIZE;x++)
        printf("%3d", numbers[x]);
    putchar('\n');
}
