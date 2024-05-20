#include <stdio.h>

int main(void){
    while(1){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        if(a+b+c == 0)
            break;
        
        a = a*a;
        b = b*b;
        c = c*c;

        if (a == b+c || b == a+c || c == a+b)
            printf("right\n");
        else 
            printf("wrong\n");

    }
    return 0;
}