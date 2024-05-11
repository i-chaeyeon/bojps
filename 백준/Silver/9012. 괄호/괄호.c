#include <stdio.h>
#include <string.h>

int main(void){
    
    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        char string[51];
        scanf("%s", string);

        int head = 0;
        for (int j=0; j<(strlen(string)); j++){
            
            if (string[j] == '('){
                head++;
            } else if (string[j] == ')'){
                head--;
            }
            
            if (head < 0){
                printf("NO\n");
                break;
            }
        }
        if (head<0){
            continue;
        }
        if (head != 0){
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}