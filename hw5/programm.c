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


int main()
{
    char command;

    while(1) {
        printf("Create the first element of a singly linked list - 1\n");
        printf("Add item to end of singly linked list - 2\n");
        printf("Remove item from end of singly linked list - 3\n");
        printf("View singly linked list - 4\n");
        printf("Delete entire singly linked list - 5\n");
        printf("Perform a sequential search for a given element in a singly linked list - 6\n");
        printf("Exit the program - 0\n");
        printf("\n");

        printf("Please, enter the command number here: \n");
        scanf("%c", &command);
        printf("\n");

        if(command == '1'){
            printf("You chose : Create the first element of a singly linked list");
            Node *head = NULL;

            for(int i = 0; i < 10; i++) {
                push(&head, i + 1);
            }

            printFromBegin(head); putchar('\n');
            break;

        }

        if(command == '2'){
            printf("You chose : Add item to end of singly linked list");
            break;
        }

        if(command == '3'){
            printf("You chose : Remove item from end of singly linked list");
            break;
        }

        if(command == '4'){
            printf("You chose : View singly linked list");
            break;
        }

        if(command == '5'){
            printf("You chose : Delete entire singly linked list");
            break;
        }

        if(command == '6'){
            printf("You chose : Perform a sequential search for a given element in a singly linked list");
            break;
        }

        if(command == '0'){
            printf("You chose : Exit the program");
            break;
        }

    }
    return 0;
}
