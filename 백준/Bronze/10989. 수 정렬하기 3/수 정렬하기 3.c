#include <stdio.h>
#include <stdlib.h>

int main(void){
    int countingArr[10001] = {0,};

    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int num;
        scanf("%d", &num);
        countingArr[num]++;
    }

    for(int i=0; i<10001; i++){
        int valcnt = countingArr[i];
        for(int j=0; j<valcnt; j++){
            printf("%d\n", i);
        }
    }
    
    return 0;
}