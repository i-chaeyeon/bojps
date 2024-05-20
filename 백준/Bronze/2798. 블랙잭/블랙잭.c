#include <stdio.h>
#include <stdlib.h>

int main(void){
    int M, N;
    scanf("%d %d", &N, &M);

    int * arr = (int*)malloc(sizeof(int)*N);

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int sub = M;
    int result = 0;

    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                int num = arr[i] + arr[j] + arr[k];
                if (num <= M){
                    int newsub = M - num;
                    if (newsub < sub){
                        sub = newsub;
                        result = num;
                    }
                }
            }
        }
    }

    printf("%d", result);

    return 0;

}
