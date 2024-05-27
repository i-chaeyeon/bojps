#include <stdio.h>

int main(void){
    while(1){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        if(a==0 && b==0 && c==0){
            break;
        }
        if(a==b && b==c && c==a){
            printf("Equilateral\n");
            continue;
        }

        if(a>b && a>c){
            if(a >= b+c){
                printf("Invalid\n");
                continue;
            }
        } else if (b>a && b>c){
            if(b >= a+c){
                printf("Invalid\n");
                continue;
            }
        } else {
            if(c >= a+b){
                printf("Invalid\n");
                continue;
            }
        }

        if (a==b || b==c || c==a){
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    return 0;
}