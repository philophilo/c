#include <stdio.h>

int main(){
    int numbers[7] = {43,42,53,23,54,656,244};
    for (int i = 0; i < 7; i++){
        printf("index %i: value %i\n", i, numbers[i]);
    }

    // diffent form of for loop
    printf("----\"dynamic forlooop\"------\n");
    int i = 0;
    for (;;){
        if (!(i < 7)){
            break;
        }
        printf("index %i: value %i\n", i, numbers[i]);
        i++;
    }

    // multiplication table
    int x[13] = {0, 1,2,3,4,5,6,7,8,9,10,11,12};
    int y[13] = {0, 1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 12; i > 0; i--){
        printf("+  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +\n");
        for (int j = 0; j < 13; j++){
            printf("|%4i ", x[i]*y[j]);
        }
        printf("|\n");
    }
    printf("+  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +  -  +\n");
    return 0;
}
