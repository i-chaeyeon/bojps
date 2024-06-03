#include <stdio.h>

int main(void){

    int N; 
    scanf("%d", &N);

    int new = N;
    int cycle = 0;

    int one, two;
    int temp;
    do {
        temp = new;
        one = temp%10;
        temp = temp/10;
        two = temp;
        new = (one+two)%10;
        new = new + 10*one;
        cycle++;
    }
    while(new != N);

    printf("%d", cycle);

    return 0;
}