#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    char name[101];
} members;

int compare(const void* a, const void* b){
    members m1 = *(members*)a;
    members m2 = *(members*)b;

    if(m1.age > m2.age)
        return 1;
    else 
        return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    members * arr = (members *)malloc(sizeof(members)*N);

    for(int i=0; i<N; i++){
        scanf("%d %s", &arr[i].age, arr[i].name);
    }

    qsort(arr, N, sizeof(members), compare);

    for(int i=0; i<N; i++){
        printf("%d %s\n", arr[i].age, arr[i].name);
    }

    free(arr);

    return 0;
}