#include <stdio.h>
#define MAX_SIZE 100000

int main(void){
    int N;
    scanf("%d", &N);

    int idx = 0;
    int arr[MAX_SIZE] = {0,};

    for(int i=0; i<N; i++){
        int num;
        scanf("%d", &num);
        if (num == 0 && idx != 0){
            arr[idx] = 0;
            idx--;
        } else if (num != 0){
            arr[idx] = num;
            idx++;
        }
    }

    int sum = 0;

    for(int i=0; i<idx; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}