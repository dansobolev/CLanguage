#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void push(Node **head, int data) {
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->value = data;
    tmp->next = (*head);
    (*head) = tmp;
}

int main(){
    Node *head = NULL;

    int *ukaz = {1,2,3,4,5};


    for(int i=0; i<5; i++){
        printf("%d", head.value);
        *ukaz++;
    }

    return 0;
}
