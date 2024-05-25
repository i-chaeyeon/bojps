#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000

typedef struct{
    int x;
    int y;
} coordinate;

int compare(const void* a, const void* b){
    coordinate c1 = *(coordinate*)a;
    coordinate c2 = *(coordinate*)b;

    int x1 = c1.x;
    int x2 = c2.x;

    int y1 = c1.y;
    int y2 = c2.y;

    if(y1>y2)
        return 1;
    else if (y1 == y2){
        if (x1>x2)
            return 1;
        else return -1;
    }
    return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    coordinate arr[MAX_SIZE];

    for(int i=0; i<N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(coordinate), compare);

    for(int i=0; i<N; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}