#include <stdio.h>
#include <stdlib.h>

int input (void);

int main(){
    int getVal;
    int h, s, r, l;
    char amiAbbas;

    while(1){
        getVal = input();
        h = 0;
        while(h <= getVal){
        s = getVal;
        while(s >= h){
            printf(" ");
            s--;
        }
        r = h;
        while(r >= 0){
            printf("%d", r);
            r--;
        }
        l = 1;
        while(l <= h){
            printf("%d", l);
            l++; 
        }

            printf("\n");

            h++;
        }

        printf("do you want to repeat project? (Y/N)\t");
        scanf("%c", &amiAbbas);
        amiAbbas = getchar();

        if((amiAbbas == 'y') || (amiAbbas == 'Y')){
            system("cls");
            continue;
        }
        else break;
    }

    return 0;
}

int input (void){
    int val;
    printf("enter any value:\t");
    scanf("%d", &val);

    return val;
}