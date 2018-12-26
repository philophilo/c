#include <stdio.h>

#define SIZE 10

void displayArray(int *a);

int main()
{
    int numbers[SIZE] = { 55, 44, 99, 11, 77, 22, 33, 88, 66, 0 };
    int outer, inner, temp;

    // unsorted array
    puts("unsorted array");
    displayArray(numbers);

    // bubble sort
    for(outer=0; outer<SIZE; outer++)
        for(inner=outer+1; inner<SIZE; inner++)
        {
            if( numbers[outer] > numbers[inner] )
            {
                temp = numbers[inner];
                numbers[inner] = numbers[outer];
                numbers[outer] = temp;
                printf("%i-> ",outer);
                displayArray(numbers);
            }
        }
}

void displayArray(int *a)
{
    int x;
    for(x=0;x<SIZE;x++)
        printf("%3d", a[x]);
    putchar('\n');
}
