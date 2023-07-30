#include <stdio.h>

void math (void){

    int num1, num2;
    char operator;
    int equal;

    //scanf("%d%c%d", &num1, &operator, &num2);

    printf("Please enter 1st number:\t");
    scanf("%d", &num1);

    printf("Please enter any oprator (oprator: + - * /):\t");
    scanf("%c", &operator);
    operator = getchar();

    //operator = getchar();

    printf("please enter 2nd number:\t");
    scanf("%d", &num2);

    if(operator == '+'){
        equal = num1 + num2;
        printf("\n\n%d + %d = %d",num1, num2,equal);
    }
    else if(operator == '-'){
        equal = num1 - num2;
        printf("\n\n%d - %d = %d",num1, num2,equal);
    }
    else if(operator == '*'){
        equal = num1 * num2;
        printf("\n\n%d x %d = %d",num1, num2,equal);
    }
    else if(operator == '/'){
        equal = num1 / num2;
        printf("\n\n%d / %d = %d",num1, num2,equal);
    }
    else printf("ERROR!");
}

void math (void);
int main(){

    math();

    return 0;
}