#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

typedef struct {
    int weight;
    int height;
} members;

int main(void){
    int N;
    scanf("%d",&N);

    members arr[MAX_SIZE];
    int ranking[MAX_SIZE] = {0,};

    for(int i=0; i<N; i++){
        scanf("%d %d", &arr[i].weight, &arr[i].height);
    }

    for(int i=0; i<N; i++){
        ranking[i] = 1;
        for(int j=0; j<N; j++){
            if (i==j)
                continue;
            if(arr[i].weight < arr[j].weight && arr[i].height < arr[j].height){
                ranking[i]++;
            }
        }
    }

   
    for(int i=0; i<N; i++){
        printf("%d ", ranking[i]);
    }

    return 0;

}