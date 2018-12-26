#include <stdio.h>

char *repeat(char r){
    int x;
    // must be static to be returned
    // otherwise the string's contents 
    // will be discarded and the results 
    // are unpredictable
    static char string[32];

    for (x=0;x<32;x++)
        string[x] = r;

    return string;
}

int main(){
    char c;
    printf("Type a character: ");
    scanf("%c", &c);
    printf("%s\n", repeat(c));
}
