#include <stdio.h>
 
int main(){
    int a, b;
    int oprator;
    int equal;

    printf("Please enter 2 number:\n");
    scanf("%d %d", &a, &b);

    printf("\n\nPlease enter a oprator for clculate your numbers:\t (oprator: + - * /)\n");
    scanf("%d", &oprator);

    equal = math(a, b, oprator);
    printf("Equal = %d",equal);

    return 0;
}
int math (int a, int b, int oprator){
    int equal;

    if(oprator == 1)             equal = a + b;
    else if(oprator ==2)         equal = a - b;
    else if(oprator == 3)        equal = a * b;
    else if(oprator == 4)        equal = a / b;

    equal = equal * 2;

    return equal;
}