#include <stdio.h>

int find(int floor, int room){
    if (floor == 0)
        return room;
    if (room == 1)
        return 1;
    
    return find(floor-1, room)+find(floor, room-1);

}

int main(void){
    int test;
    scanf("%d", &test);
    
    int floor;
    int room;


    for(int i=0; i<test; i++){
        scanf("%d", &floor);
        scanf("%d", &room);
        
        int result = find(floor, room);
        printf("%d\n", result);
    }

    return 0;
}