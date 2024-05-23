#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    scanf("%d", &N);

    int * arr = (int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++){
        arr[i] = i+1;
    }

    int head = 0;
    int tail = N-1;
    
    while ( head!=tail ){
        arr[head] = 0;

        int tempHead = head;
        int headcnt = 0;
        while(headcnt < 2){
            tempHead = (tempHead+1)%N;
            if(arr[tempHead] != 0){
                headcnt++;
            }
        }
        head = tempHead;
        
        tail = (tail+1)%N;
        while(arr[tail] == 0)
            tail = (tail+1)%N;
    }
    
    printf("%d", arr[head]);

    return 0;
}