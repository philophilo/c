#include <stdio.h>

void nestedTernary(){
    int age;
    char *classification;

    printf("Enter your age");
    scanf("%d", &age);

    classification = (( age < 19) ? "kid" :
            ( age < 65 ? "adult" :
              "geezer"));
    printf("you are %s\n", classification);
}

int main(){
    nestedTernary();
    return 0;
}
