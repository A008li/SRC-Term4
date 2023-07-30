#include <stdio.h>
void math (void){
    int number1 , number2;
    int equal;
    char oprator;

    printf("\nenter number:");
    scanf("%d%c%d", &number1, &oprator, &number2);

    if(oprator == '+'){
        equal = number1 + number2;
        printf("%d", equal);
    }
    else if(oprator == '-'){
        equal = number1 - number2;
        printf("%d", equal);
    }
    else if(oprator == '*'){
        equal = number1 * number2;
        printf("%d", equal);
    }
    else if(oprator == '/'){
        equal = number1 / number2;
        printf("%d", equal);
    }
}

int main(){
    math();

    return 0;
}

