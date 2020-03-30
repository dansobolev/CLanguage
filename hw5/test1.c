#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node {
    Data data;
    struct Node* next;
}   Node;

//-----------------------------------------------------------------------------
void push(Node** list, const Data data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = *list;
    *list = node;
}
//-----------------------------------------------------------------------------
void printFromHead(const Node* list) {
    if (list) {
        printf("%d ", list->data);
        printFromHead(list->next);
    }
}
//-----------------------------------------------------------------------------
void printFromTail(const Node* list) {
    if (list) {
        printFromTail(list->next);
        printf("%d ", list->data);
    }
}
//-----------------------------------------------------------------------------

int main() {
    int i;
    Node* list = NULL;

    for (i = 0; i < 10; ++i) {
        push(&list, i + 1);
    }

    printFromHead(list); putchar('\n');
    printFromTail(list); putchar('\n');

    return 0;
}
