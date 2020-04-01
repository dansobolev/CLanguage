#include <stdio.h>

typedef struct {
    char *str;
} Character;

Character ptr = {"Example of string"};
address = &ptr.str;


int main(){
    printf("String - %s, address - %d", ptr.str, address);
    return 0;
}
