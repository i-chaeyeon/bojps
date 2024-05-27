#include <stdio.h>
#include <stdlib.h>

int main(void){
    int H,W,N,M;
    scanf("%d %d %d %d", &H, &W, &N, &M);

    int block = M+1;
    int space = W/block;
    if(W%block != 0)
        space++;

    int verBlock = N+1;
    int verSpace = H/verBlock;
    if(H%verBlock != 0)
        verSpace++;


    printf("%d", space*verSpace);

    return 0;
}