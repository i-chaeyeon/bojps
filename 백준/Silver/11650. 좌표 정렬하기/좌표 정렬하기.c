#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

typedef struct{
    int x;
    int y;
} coordinate;

coordinate arr[MAX_SIZE];

int compare(const void *a, const void *b){
    coordinate A = *(coordinate *)a;
    coordinate B = *(coordinate *)b;
    
    if (A.x > B.x) {
        return 1; //swap 하는 경우
    }
    else if (A.x == B.x) {
        if (A.y > B.y)
            return 1; //swap 하는 경우
        else
            return -1; //swap 하지 않는 경우
    }
   
    return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(coordinate), compare);

    for(int i=0; i<N; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}


