#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000

int searchArray[MAX_SIZE];

int compare(const void* a, const void* b){
    int n1 = *(int *)a;
    int n2 = *(int *)b;

    if(n1>n2)
        return 1;
    else 
        return -1;
}

int binSearch(int arr[], int head, int tail, int num){
    while(head <= tail){
        int mid = head + (tail-head)/2;
        if(arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            head = mid + 1;
        else 
            tail = mid - 1;
    }
    return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &searchArray[i]);
    }

    qsort(searchArray, N, sizeof(int), compare);

    int M;
    scanf("%d", &M);

    for(int i=0; i<M; i++){
        int num;
        scanf("%d", &num);
        if(binSearch(searchArray, 0, N-1, num)!= -1)
            printf("%d\n", 1);
        else
            printf("%d\n", 0);
    }
    
    return 0;
}   
