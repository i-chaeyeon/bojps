#include <stdio.h>

int main(void){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int gcd, lcm;
    
    if (n1<n2)
        gcd = n1;
    else
        gcd = n2;

    while (!(n1%gcd==0 && n2%gcd==0))
        gcd--;

    
    lcm = n1*n2/gcd;

    printf("%d\n%d", gcd, lcm);

    return 0;
}