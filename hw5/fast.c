#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct Node *next;
} Node;

void create_first_element(n){


    for(int i = 0; i < 11; i++) {
        push(&n, i + 1);
    }

}

void push(Node **head, int data) {
    Node *tmp = malloc(sizeof(struct Node));
    tmp->value = data;
    tmp->next = *head;
    *head = tmp;
}

void printFromTail(const Node *head) {
    if (head) {
        printFromTail(head->next);
        printf("%d ", head->value);
    }
}

int main() {

    Node *head = NULL;

    create_first_element(head);
    printFromTail(head);

    return 0;
}
