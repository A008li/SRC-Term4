#include <stdio.h>

int input (void);

int main(){
    int getVal = input();

    for(int i = 0; i <= getVal; i++){
        for(int j = getVal; j >= i; j--)    printf(" ");
        for(int k = i; k >= 0; k--)         printf("%d", k);
        for(int n = 1; n <= i; n++)         printf("%d", n);

        printf("\n");
    }

    return 0;
}

int input (void){
    int val;
    printf("enter any value:\t");
    scanf("%d", &val);

    return val;
}