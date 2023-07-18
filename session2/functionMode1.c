#include <stdio.h>
int main(){
    int a , b, equal;

    printf("Please enter 2 number:\t");
    scanf("%d %d", &a, &b);

    equal = sum(a, b);

    printf("\n A + B = %2d",equal);

    return 0;
}

int sum (int a, int b){
    int equal;
    equal = a + b;

    return equal;
}