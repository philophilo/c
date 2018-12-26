#include <stdio.h>


void notCoolManipulation()
{
    char *string = "hello hello there, greatings!!";
    // using point as a value
    while(*string != '\0')
    {
        // using the pointer as a value too
        putchar(*string);
        // using the pointer a memory location
        string++;
    }
    putchar('\n');
}

void properMainpulation()
{
    char *string = "hello hello there, greatings!!";
    char *s;
    // by using variable s, the address of
    // variable string is preserved
    s = string;
    while(*s)
        putchar(*s++);
    putchar('\n');
    // the * is boud to the character then the 
    // increment comes second afterwards
    // incrementing the address
    
}

void sampleMainpulation()
{
    char string[] = "hello hello there, greatings!!";
    char *s;
    s = string;
    while(*s)
    {
        putchar( ++*s );
        s++;
    }
    putchar('\n');
}

int main()
{
    notCoolManipulation();
    properMainpulation();
    sampleMainpulation();
    return 0;
}
