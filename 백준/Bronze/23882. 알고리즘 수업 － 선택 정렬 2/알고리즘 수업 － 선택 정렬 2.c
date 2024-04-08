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

    int cnt=0;
    int temp = 0;
    int max = 0;
    for (int i=N-1; i>=0; i--){
        int maxIdx = i;
        for (int j=0; j<i; j++){
            if (arr[j] > arr[maxIdx]){
                maxIdx = j;
            }
        }

        if (maxIdx != i){
            temp = arr[i];
            arr[i] = arr[maxIdx];
            max = arr[maxIdx];
            arr[maxIdx] = temp;
            cnt++;
        }

        if (cnt == K)
            break;
    }

    if (cnt < K){
        printf("-1 \n");
    } else {
        for (int i=0; i<N; i++){
            printf("%d ", arr[i]);
        }
    }

    free(arr);
    return 0;
}