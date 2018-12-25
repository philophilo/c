#include <stdio.h>

// the data type here represents the type
// value returned by the function
int max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int multiply(int a, int b){
    return a * b;
}

// if not return a thing
// use void and then function name
void printout(char* a){
    printf("printing...\n%s\n", a);
}

// recussion
// using factorial as an example
int factorial(int n){
    if (n == 1){
        return n;
    }else{
        return n * factorial(n -1);
    }
}

int factorialFor(int n){
    int y       = 1;
    for (;;){
        y *= n;
        if (n <= 1){
            break;
        }
        n--;
    }
    return y;
}

int factorialWhile(int n){
    int y   = 1;
    while (n){
        y *= n;
        n--;
    }
    return y;
}

int main(){
    printf("max beteen 9 and 8 is %i\n", max(9, 8));
    printf("product of 9 and 8 is %i\n", multiply(9, 8));
    printout("hello there");
    printf("the factorial of 4 is %i\n", factorial(4));
    printf("factorialFor of 4 is %i\n", factorialFor(4));
    printf("factorialWhile of 4 is %i\n", factorialWhile(4));
}
