#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    
    int mincnt = N;
    int cnt = 0;

    for(int i=N; i>=0; i=i-5){
        if (i%3 != 0){
            cnt++;
            continue;
        }
        int numFive = cnt;
        int numThree = i/3;

        int total = numFive + numThree;

        if (total < mincnt){
            mincnt = total;
        }
        cnt++;
    }

    if (mincnt == N){
        mincnt = -1;
    }

    printf("%d \n", mincnt);

    return 0;
}