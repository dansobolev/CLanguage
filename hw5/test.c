#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct Node *next;
} Node;

void push(Node **head, int data) {
    Node *tmp = malloc(sizeof(struct Node));
    tmp->value = data;
    tmp->next = *head;
    *head = tmp;
}

void printFromBegin(const Node *head){
    if (head) {
        printf("%d ", head->value);

    }
}

int main() {

    Node *head = NULL;

    for(int i = 0; i < 10; i++) {
        push(&head, i + 1);
    }

    printFromBegin(head); putchar('\n');

    return 0;
}
