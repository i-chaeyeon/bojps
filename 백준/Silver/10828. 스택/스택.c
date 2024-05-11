#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10000

int top = -1;

int main(void){
    int N;
    scanf("%d", &N);

    int stack[MAX_SIZE];

    for(int i=0; i<N; i++){
        char str[6];
        scanf("%s", str);

        if(!strcmp(str, "push")){
            int num;
            scanf("%d", &num);
            stack[++top] = num;
        } else if (!strcmp(str, "pop")){
            if (top!=-1)
                printf("%d\n", stack[top--]);
            else 
                printf("%d\n", top);
        } else if (!strcmp(str, "size")){
            printf("%d\n", top+1);
        } else if (!strcmp(str, "empty")){
            if (top == -1)
                printf("%d\n", 1);
            else
                printf("%d\n", 0);
        } else if (!strcmp(str, "top")){
            if (top == -1)
                printf("%d\n", top);
            else 
                printf("%d\n", stack[top]);
        }
    }

    return 0;
}