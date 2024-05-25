#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10000

int main(void){
    int N;
    scanf("%d", &N);

    int queue[MAX_SIZE] = {0,};

    char inst[10] = {0,};

    int head = -1;
    int tail = 0;

    for(int i=0; i<N; i++){
        scanf("%s", inst);

        if(!strcmp(inst, "push")){
            int num;
            scanf("%d", &num);
            queue[++head] = num;
        } else if (!strcmp(inst, "pop")){
            if(head < tail){
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n", queue[tail++]);
        } else if (!strcmp(inst, "size")){
            if(head >= tail){
                printf("%d\n", head-tail+1);
            } else{
                printf("%d\n", 0);
            }
        } else if (!strcmp(inst, "empty")){
            if(head < tail){
                printf("%d\n", 1);
            } else{
                printf("%d\n", 0);
            }
        } else if (!strcmp(inst, "front")) {
            if(head < tail){
                printf("%d\n", -1);
            } else {
                printf("%d\n", queue[tail]);
            }
        } else if (!strcmp(inst, "back")){
            if(head < tail){
                printf("%d\n", -1);
            } else {
                printf("%d\n", queue[head]);
            }
        }
    }

    return 0;
}
