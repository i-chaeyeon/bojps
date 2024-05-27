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


        int max;
        if(a>b && a>c){
            max = a;
            if(a >= b+c){
                printf("Invalid\n");
                continue;
            }
        } else if (b>a && b>c){
            max = b;
            if(b >= a+c){
                printf("Invalid\n");
                continue;
            }
        } else {
            max = c;
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