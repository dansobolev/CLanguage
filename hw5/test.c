#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct Node *next;
} Node;

void create_first_element(n){


    for(int i = 0; i < 7; i++) {
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


    char command;

    while(1){
        printf("Your number: \n");
        scanf("%c", &command);

        if(command == '1'){
            printf("You chose to create first element\n");
            create_first_element(head);
        }

        if(command == '2'){
            printf("You chose to show all elements of the list\n");
            printFromTail(head);
        }

    }




    return 0;
}
