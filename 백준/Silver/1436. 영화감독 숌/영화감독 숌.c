#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    int ans = 665;
    int count = 0;
    

    while (count < N){
        ans++;
        int tempAns = ans;
        int sixCount = 0;
        while(tempAns > 0){
            int lastDigit = tempAns%10;

            if(lastDigit == 6)
                sixCount++;
            else
                sixCount = 0;   
            
            if(sixCount == 3){
                count++;
                break;
            }
            tempAns = tempAns/10;
        }
    }

    printf("%d\n", ans);
    return 0;
}