/* Write a C program to reverse a linked list iteratively */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

//insert
void list_insert_at_beginning(struct node **head, int data);
void list_insert_at_end(struct node **head, int c);
void list_insert_at_pos(struct node **head, int data, int pos);
//delete
void list_delete_at_beginning(struct node **head);
void list_delete_at_end(struct node **head);
void list_delete_at_pos(struct node **head, int pos);
//traverse
void list_traverse(struct node **head);
//reverse
void list_reverse(struct node **head);

int main(void) {
    struct node *head;

    head = NULL;

    list_insert_at_beginning(&head, 10);
    // list_insert_at_beginning(&head, 20);
    // list_insert_at_beginning(&head, 30);
    // list_insert_at_beginning(&head, 40);
    // list_insert_at_beginning(&head, 50);
    // list_insert_at_beginning(&head, 60);
    // list_delete_at_beginning(&head);
    // list_delete_at_beginning(&head);
    // list_delete_at_end(&head);
    // list_delete_at_end(&head);
    // list_delete_at_end(&head);
    // list_delete_at_pos(&head, 3);
    // list_delete_at_pos(&head, 5);
    list_traverse(&head);
    list_reverse(&head);
    // list_delete_at_beginning(&head);
    // list_delete_at_beginning(&head);
    // list_delete_at_beginning(&head);
    // list_insert_at_end(&head, 10);
    //  list_insert_at_end(&head, 20);
    //   list_insert_at_end(&head, 30);
    //    list_insert_at_end(&head, 40);
    //     list_insert_at_end(&head, 50);
    //      list_insert_at_end(&head, 60);
    // list_insert_at_pos(&head, 10, 1);
    // list_insert_at_pos(&head, 20, 2);
    // list_insert_at_pos(&head, 30, 3);
    // list_insert_at_pos(&head, 40, 4);
    // list_insert_at_pos(&head, 50, 5);
    // list_insert_at_pos(&head, 60, 6);
    // list_insert_at_pos(&head, 70, 3);
    list_traverse(&head);
}


void list_insert_at_beginning(struct node **head, int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void list_insert_at_end(struct node **head, int data) {
    struct node *temp;
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    
    temp1->data = data;
    temp1->next = NULL;
    temp = *head;
    if (*head != NULL) {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = temp1;
    } else
        *head = temp1;
}

void list_insert_at_pos(struct node **head, int data, int pos) {
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = data;
    struct node *temp = *head;

    if (pos == 1) {
        temp1->next = *head;
        *head = temp1;
        return;
    }

    for (int i = 1; i < pos-1; i++)
        temp = temp->next;
    temp1->next = temp->next;
    temp->next = temp1;    
}

void list_delete_at_beginning(struct node **head) {
    struct node *temp;
    if (*head != NULL) {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void list_delete_at_end(struct node **head) {
    struct node *temp;
    struct node *temp1 = *head;
    //traverse till end
    while (temp1->next->next != NULL) {
        temp1 = temp1->next;
    }
    temp = temp1->next;
    temp1->next = temp->next; //which is null in the end
    free(temp);
}

void list_delete_at_pos(struct node **head, int pos) {
    struct node *temp = *head;
    struct node *temp1;

    if (*head != NULL) {
        if (pos == 1) {
            temp1 = *head;
            *head = temp1->next;
            free(temp1);
            return;
        }

        for (int i = 1; i < pos-1; i++)
            temp = temp->next;
        temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
    }   
}

void list_reverse(struct node **head) {
    struct node *current;
    struct node *next;
    struct node *prev;

    prev = NULL;
    current = *head;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void list_traverse(struct node **head) {
    struct node *temp;

    for (temp = *head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);
    printf("\n");
}
