#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    int cnt=0;

    for(int i=0; i<N; i++){
        int num;
        scanf("%d", &num);
        if (num<2){
            continue;
        }
        int factor = 0;
        for (int j=2; j<num; j++){
            if (num%j == 0){
                factor++;
                break;
            }
        }
        if (factor == 1){
            continue;
        }
        else if (factor == 0){
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}