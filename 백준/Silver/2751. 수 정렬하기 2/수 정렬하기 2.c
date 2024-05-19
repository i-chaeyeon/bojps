#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1];
    int R[n2];

    for(int i=0; i<n1; i++){
        L[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = arr[m+i+1];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = l + (r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main(void){
    int N;
    scanf("%d", &N);

    int * arr;
    arr = (int*) malloc(sizeof(int)*N);

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, N-1);

    for(int i=0; i<N; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}