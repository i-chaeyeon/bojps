#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    scanf("%d",&N);

    int maxScore = 0;
    int sum = 0;
    int *scoreArr;
    scoreArr = (int *) malloc(sizeof(int)*N);

    for (int i=0; i<N; i++){
        scanf("%d", &scoreArr[i]);
        if (scoreArr[i] > maxScore){
            maxScore = scoreArr[i];
        }
        sum += scoreArr[i];
    }

    double avg = (double)sum/maxScore*100;

    printf("%f", (double) avg/N);

    free(scoreArr);
    return 0;
}