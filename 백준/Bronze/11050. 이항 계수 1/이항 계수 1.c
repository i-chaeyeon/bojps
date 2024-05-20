#include <stdio.h>

int main(void){
    int n,k;
    scanf("%d %d", &n, &k);

    int fac=1;
    int mul=1;
    for(int i=0; i<k; i++){
        mul = mul*(n-i);
        fac = fac*(i+1);
    }

    printf("%d", mul/fac);

    return 0;
    
}