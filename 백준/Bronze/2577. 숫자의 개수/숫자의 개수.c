#include <stdio.h>

int main(void){

    int A=0, B=0, C=0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    int result = A*B*C;
    char resultString[1000000];

    sprintf(resultString, "%d", result);

    int arr[10]= {0,};

    int i = 0;
    while (resultString[i] != '\0'){
        arr[resultString[i]-'0'] += 1;
        i++;
    }

    for(int j=0; j<10; j++){
        printf("%d\n", arr[j]);
    }

    return 0;
}