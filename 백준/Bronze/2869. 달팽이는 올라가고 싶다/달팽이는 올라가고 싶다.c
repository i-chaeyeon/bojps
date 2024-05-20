#include <stdio.h>

int main(void){
    int A,B,V;
    scanf("%d %d %d", &A, &B, &V);

    int value = 0;

    if ( (V-B)%(A-B) == 0)
        value = (V-B)/(A-B);
    else 
        value = (V-B)/(A-B)+1;

    printf("%d", value);

    return 0;
}