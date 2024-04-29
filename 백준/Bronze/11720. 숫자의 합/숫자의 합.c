#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N = 0; 
    int sum = 0;

    scanf("%d", &N);
    char * numstring;
    numstring = (char*) malloc (sizeof(char)*N+1);
    scanf("%s", numstring);

    for(int i=0; i<N; i++){
        sum += numstring[i]-'0';
    }

    printf("%d", sum);

    return 0;
}