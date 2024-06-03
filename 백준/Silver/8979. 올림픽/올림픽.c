#include <stdio.h>
#define MAX_SIZE 1000


typedef struct{
    int country;
    int gold;
    int silver;
    int bronze;
} ranking;


int main(void){

    int N, K;
    scanf("%d %d", &N, &K);

    ranking arr[MAX_SIZE];

    for(int i=0; i<N; i++){
        int num;
        scanf("%d %d %d %d", &arr[i].country, &arr[i].gold, &arr[i].silver, &arr[i].bronze);
    }

    int idx=0;
    while(arr[idx].country != K){
        idx++;
    }
    int curGold = arr[idx].gold;
    int curSilver = arr[idx].silver;
    int curBronze = arr[idx].bronze;


    int result = 0;

    for(int i=0; i<N; i++){
        if(arr[i].country == K)
            continue;
        if(arr[i].gold > curGold){
            result++;
            continue;
        }
        if(arr[i].silver > curSilver){
            result++;
            continue;
        }   
        if(arr[i].bronze > curBronze){
            result++;
            continue;
        }
    }

    printf("%d", result);
    return 0;
}