#include <stdio.h>

int main(void){
    int H, M;
    scanf("%d %d", &H, &M);

    M = M-45;

    if (M<0){
        H = H-1;
        if (H<0){
            H = H+24;
        }
        M = M+60;
    }
    
    printf("%d %d\n", H, M);
    return 0;
}