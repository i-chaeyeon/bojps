#include <stdio.h>
#include <stdlib.h>

int main(void){

    int N, K;
    scanf("%d %d", &N, &K);

    int *arr; 
    arr = (int*) malloc(sizeof(int)*N);

    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    int small;
    int big;
    for (int i=N-1; i>=0; i--){

        for (int j=0; j<i; j++){
            if (arr[j]>arr[j+1]){
                small = arr[j+1];
                big = arr[j];
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                cnt++;
            }

            if (cnt == K)
                break;
        }

        if (cnt == K)
            break;
    }

    if (cnt < K){
        printf("-1 \n");
    } else {
        printf("%d %d \n", small,big);
    }

    free(arr);
    return 0;
}