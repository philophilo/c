#include <stdio.h>

void input(){
    int a, b, larger;
    printf("Enter a value\n");
    scanf("%d", &a);
    printf("Enter another value\n");
    scanf("%d", &b);
    larger = (a > b) ? a : b;
    printf("%d is larger\n", larger);
}

int main(){
    input();
    return 0;
}

