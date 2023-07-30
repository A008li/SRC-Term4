#include <stdio.h>
#include <stdlib.h>

int input (void);
char report (void);

int main(){
    int getVal;
    char rp;

    while(1){
        getVal = input();
        
        for(int i = 1; i <= getVal; i++){
            for(int j = 1; j <= getVal; j++){
                if((i == 1) || (i == getVal) || (j == 1) || (j == getVal))  printf(" *");
                else printf("  ");
            }
            printf("\n");
        }

        rp = report();

        if(rp == 'y' || rp == 'Y'){
            system("cls");
            continue;
        }
        else break;
    }
}

int input (void){
    int val;
    printf("enter any value:\t");
    scanf("%d", &val);

    return val;
}

char report (void){
    char rp;
    printf("do you want to repeat? (Y/N)\t");
    scanf("%c", &rp);
    rp = getchar();

    return rp;
}