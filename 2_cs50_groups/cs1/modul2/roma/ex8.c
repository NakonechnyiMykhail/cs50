#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    int age;
    int id;
    int score;
    string place;
} student;

typedef struct node{
    int value;
    struct node* next;
} node;

void push(node * head, int value);
void printlist(node* head);
void push_start(node ** head, int value);

int main(void){
    node * head = NULL;
    head = malloc(sizeof(node));

    if(head == NULL) {
        return 1;
    }





    head->value = student walker{"Walker", 24, 51, 55, "School"};
    head->next = malloc(sizeof(node));
    head->next->value = student ivan{"Ivan", 23, 50, 55, "School"};
    head->next->next = malloc(sizeof(node));
    head->next->next->value = student walker{"Lol", 21, 56, 55, "School"};
    head->next->next->next = NULL;

    printlist(head);
    printf("--------------------\n");


    push_start(&head, student loh = {"LOH", 24, 51, 55, "School"};);
    printlist(head);
    printf("--------------------\n");

    return 0;
}

void push(node * head, int value){
    node * current = head;

    while(current->next != NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(node));
    current->next->value = value;
    current->next->next = NULL;
}

void printlist(node* head){
    node * current = head;

    while(current != NULL) {
        printf("%d\n", current-> value);
        printf("Address: %p\n", (void *)current->next);
        current = current->next;
    }
}

void push_start(node ** head, int value){
    node * new_node;
    new_node = malloc(sizeof(node));

    new_node-> value =value;
    new_node-> next = *head;
    *head = new_node;
}