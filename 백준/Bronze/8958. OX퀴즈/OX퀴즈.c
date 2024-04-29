#include <stdio.h>

int main(void){

    int cases = 0;
    scanf("%d", &cases);

    char results[80];

    for(int i=0; i<cases; i++){
        int score = 0;
        scanf("%s", results);

        int j=0;
        int connected = 1;
        while (results[j] != '\0'){
            if (results[j] == 'O'){
                if (connected!=1){
                    score += connected;
                    connected++;
                } else{
                    score++;
                    connected++;
                }
            } else if (results[j] == 'X'){
                connected = 1;
            }
            j++;
        }
        printf("%d \n", score);
    }

    return 0;
}