#include <stdio.h>

int main(void){

    int flag = 0; //asc:1, dec:2, mix:3
    int temp = 0;

    for(int i=0; i<8; i++){
        int num = 0;
        scanf("%d", &num);

        if (i == 0){
            temp = num;
            continue;
        }

        if (i == 1){
            if (temp > num){
                flag = 2;
            } else if (temp < num){
                flag = 1;
            }
            temp = num;
            continue;
        }

        if (temp > num && flag == 2){
            temp = num;
            continue;
        } else if (temp < num && flag == 1){
            temp = num;
            continue;
        } else{
            flag = 3;
            break;
        }
        
    }

    if (flag == 1)
        printf("ascending");
    else if (flag == 2)
        printf("descending");
    else
        printf("mixed");

    return 0;
}