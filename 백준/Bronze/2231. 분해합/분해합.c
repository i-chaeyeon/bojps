#include <stdio.h>
#include <string.h>

int main(void){
    int N;
    scanf("%d", &N);
    
    int ans = 0;

    for(int i=0; i<N; i++){
        int sum = 0;
        int number = i;
        while(number){
            sum += number%10;
            number = number/10;
        }

        if (sum+i == N){
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}