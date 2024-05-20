#include <stdio.h>

int main(void){
    
    int N;
    scanf("%d", &N);

    int n = 0;
    while(1){
        int end = 3*n*n - 3*n + 1;
        if(N <= end)
            break;
        n++;
    }

    if (n==0){
        n = 1;
    }
    
    printf("%d", n);

    return 0;
}