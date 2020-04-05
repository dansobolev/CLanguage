#include <stdio.h>
#include <stdlib.h>

typedef struct list {
	char *name;
	struct list *next;
	struct list *prev;
}list;

void display(list *start){
	list *i = start;
	for ( ; i != NULL; i=i->next){
		printf("%s\n  ", i->name);
	}
}


list* create (list *last){
	list *i = (list*)malloc(sizeof(list));
	char name_of_element[10];

    printf("Enter the name of the element: ");
    scanf("%s", name_of_element);

    i -> name = strdup(name_of_element);
	i->next = NULL;
	i->prev = NULL;

	return i;
}

list *add_element(list *last) {
    list *p;
    list *i = (list*)malloc(sizeof(list));
    char name_of_element[10];

    printf("Enter the name of the element: ");
    scanf("%s", name_of_element);


    p = last->next;
    last->next = i;
    i->name = strdup(name_of_element);
    i->next = p;



    return i;


}

list* delete_element(list *last, list *start){
    list *temp;
    temp = start;
    while(temp->next != last){
        temp = temp->next;
    }
    temp->next = last->next;
    free(last);
    return(temp);
}






int main(){

    int n, count=0;
    list *start = NULL;
    list *last = NULL;
    list *i = NULL;


    while(1){
        printf("Create the first element of a singly linked list - 1\n");
        printf("Add item to end of singly linked list - 2\n");
        printf("Remove item from end of singly linked list - 3\n");
        printf("View singly linked list - 4\n");
        printf("Delete entire singly linked list - 5\n");
        printf("Perform a sequential search for a given element in a singly linked list - 6\n");
        printf("Exit the program - 0\n");
        printf("\n");

        printf("Please, enter the command number here: \n");

        scanf("%d", &n);

        if(n==1){
            char name;
            printf("Enter the name of the element: ");

            i = create(last);
            if (count>=1){
                last = i;
                count++;
                printf("Done! \n");
            }
            else {
                start = i;
                last = i;
                count++;
                printf("Done! \n");
            }
        }

        if(n==2){
            i = add_element(last);
            last = i;
            printf("Done! \n");
        }

        if(n==3){
            i = delete_element(last, start);
            printf("Done! \n");
        }

        if(n == 4){
            if(start -> name != NULL){
                display(start);
            }
            printf("Done! \n");

        }

        if(n==5){
            printf("Done! \n");
        }

        if(n==6){

        }

        if(n==7){
            printf("You chose : Exit the program");
            break;
        }

    }
    return 0;

}
