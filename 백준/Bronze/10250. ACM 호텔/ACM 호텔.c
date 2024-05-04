#include <stdio.h>
#include <stdlib.h>

int main(void){

    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int floor, rooms, num;

        scanf("%d %d %d", &floor, &rooms, &num);

        int hori, verti;
        hori = ((num-1)/floor)+1;
        verti = num%floor;
        if (verti == 0){
            verti = floor;
        }

        printf("%d%02d\n", verti, hori);
    }
    
    return 0;
}