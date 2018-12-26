#include <stdio.h>
#include <stdlib.h>

void intergers()
{
    int a, *ptra;

    // the pointer is initialized to the address
    // of variable a
    ptra = &a;
    printf("Address of var a: \t%p\n", &a);
    printf("Pointer ptra: \t%p\n", ptra);
}

void arrays()
{
    int a[10], *ptra;

    // an array named by itself 
    // with no square[] brackets attached
    // is the same as a pointer
    ptra = a;
    printf("Address of var a: \t%p\n", a);
    printf("Address of var a: \t%p\n", &a);
    printf("Pointer ptra: \t%p\n", ptra);

    // check the address of the first value 
    // in the array
    puts("------arrays first index address----");
    ptra = a;
    printf("Address of var a: \t%p\n", a);
    printf("Address of var a: \t%p\n", &a[0]);
    printf("Pointer ptra: \t%p\n", ptra);

    // the apersand is not required to fetch the 
    // base address of the array

}

void addressArray()
{
    int a[10], *ptra2;
    // other indeces
    puts("------arrays other index addresses----");
    ptra2 = &a[3];
    printf("Address of var a: \t%p\n", a);
    printf("Address of var a: \t%p\n", &a[3]);
    printf("Pointer ptra: \t%p\n", ptra2);
}

int main()
{
    // pointer variables hold memory location
    // however, they must be assigned.. that assignemt
    // typically comes from another variable
    // Functions on the other can return addresses
    // as well.
    puts("------intergers------");
    intergers();
    puts("------arrays------");
    arrays();
    addressArray();
}
