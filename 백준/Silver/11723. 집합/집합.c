#include <stdio.h>
#include <string.h>

int main(void){
    int M;
    scanf("%d", &M);

    int set[20] ={0,};

    for(int i=0; i<M; i++){
        char instruction[8];
        scanf("%s", instruction);

        if(!strcmp(instruction, "add")){
            int num;
            scanf("%d", &num);
            if(set[num-1]!=1)
                set[num-1] = 1;
        } else if (!strcmp(instruction, "remove")){
            int num;
            scanf("%d", &num);
            if(set[num-1]==1)
                set[num-1] = 0;
        } else if (!strcmp(instruction, "check")){
            int num;
            scanf("%d", &num);
            printf("%d\n", set[num-1]);
        } else if (!strcmp(instruction, "toggle")){
            int num;
            scanf("%d", &num);
            set[num-1] = set[num-1]^1;
        } else if (!strcmp(instruction, "all")){
            for(int j=0; j<20; j++){
                set[j] = 1;
            }
        } else if (!strcmp(instruction, "empty")){
            for(int j=0; j<20; j++){
                set[j] = 0;
            }
        } else if (!strcmp(instruction, "check")){
            int num;
            scanf("%d", &num);
            printf("%d\n", set[num-1]);
        } 
    }

    return 0;
}