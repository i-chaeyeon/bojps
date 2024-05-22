#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 20000

typedef struct{
    char str[51];
} string;

string strArr[MAX_SIZE];

int compare(const void* a, const void* b){
    string A = *(string *)a;
    string B = *(string *)b;

    int cmpLen = strlen(A.str) - strlen(B.str);

    if (cmpLen > 0)
        return 1;
    else if (cmpLen < 0)
        return -1;

    int cmpVal = strcmp(A.str, B.str);

    if (cmpVal >= 0){
        return 1;
    }
    
    return -1;
}

int main(void){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%s", strArr[i].str);
    }

    qsort(strArr, N, sizeof(string), compare);

    string temp;
    for(int i=0; i<N; i++){
        int cmpVal = strcmp(temp.str, strArr[i].str);
        if (cmpVal!=0){
            printf("%s\n", strArr[i].str);
            temp = strArr[i];
        }
        
    }

    return 0;
}