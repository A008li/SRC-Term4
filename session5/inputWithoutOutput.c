#include <stdio.h>

void pattern (int value);

int main(){
    int val;

    printf("enter any value:\t");
    scanf("%d", &val);

    pattern(val);

    return 0;
}

void pattern (int value){
    for(int i = 1; i <= value; i++){
        for(int j = 1; j <= i; j++)          printf("* ");

        printf("\n");
    }
}