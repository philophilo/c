#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myVar = 20;
    int sNum = -10;
    if (myVar > sNum) {
        myVar = myVar * 2;
    }
    printf("values of myVar is : %i\n", myVar);
    char myChar ='X';
    // other conditions must be stated to what they are compared to
    // as opposed to other languages
    if ((myChar == 'A') || ((myVar > sNum) && (myChar != myVar))){
        printf("myVar : %i \nmyChar : %d\n", myVar, myChar);
    }
    return 0;
}
