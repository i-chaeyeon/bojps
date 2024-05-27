#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    scanf("%d", &N);

    int* students = (int*)malloc(sizeof(int)*N);

    for(int i=0; i<N; i++){
        int num;
        scanf("%d", &num);
        students[i] = num;
    }   

    int B, C;
    scanf("%d %d", &B, &C);

    long long result = 0;
    for(int i=0; i<N; i++){
        result += 1;
        students[i] -= B;
        if(students[i]<=0)
            continue;
        result += students[i]/C;
        students[i] = students[i]%C;
        if(students[i])
            result++;
    }

    printf("%ld", result);

    free(students);
    return 0;
}