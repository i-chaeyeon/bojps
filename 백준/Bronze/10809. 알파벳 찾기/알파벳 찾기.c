#include <stdio.h>
#include <stdlib.h>

int main(void){
    char string[100]; 
    scanf("%s", string);

    int alphabets[26];
    for(int i=0; i<26; i++){
        alphabets[i] = -1;
    }

    for(int i=0; i<100; i++){
        if (string[i] == '\0') break;
        if (alphabets[string[i]-'a'] == -1){
            alphabets[string[i]-'a'] = i;
        }
    }

    for(int i=0; i<26; i++){
        printf("%d ", alphabets[i]);
    }

    return 0;
}