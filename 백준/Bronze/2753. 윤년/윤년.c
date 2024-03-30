#include <stdio.h>

int main(void){
    int year;
    scanf("%d", &year);

    if (year%4 != 0){
        printf("%d", 0);
        return 0;
    } 

    if (year%100 == 0 && year%400 != 0){
        printf("%d", 0);
    } else {
        printf("%d", 1);
    }
    
    return 0;
}