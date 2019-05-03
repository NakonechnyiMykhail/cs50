#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

#define STUDENTS 4

typedef struct
{
    string name;
    int age;
    int score;
    string place;
} student;

typedef struct node
{
  student stud;
  struct node* next;
} node; //node_t -> node

// void push(node * head, int value);
void push_start(node ** head, string name, int age, int score, string place);
// void printList(node * head); // node_t * head

int main(void){
    node * head = NULL;
    head = malloc(sizeof(node));

    if(head == NULL) {
        return 1;
    }

    // head->stud = {"Ivan", 20, 58, "KNU"};//1
    head->stud.name = "Ivan";
    head->stud.age = 20;
    head->stud.score = 68;
    head->stud.place = "KNU";
    //head->next = NULL;
    head->next = malloc(sizeof(node));
    // head->next->stud = {"Ruslan", 26, 78, "KhPI"};//2
    head->next->stud.name = "Ruslan";
    head->next->stud.age = 26;
    head->next->stud.score = 78;
    head->next->stud.place = "KhPI";
    head->next->next = malloc(sizeof(node));
    // head->next->next->stud = {"Oleg", 21, 65, "KPI"};//3
    head->next->next->stud.name = "Oleg";
    head->next->next->stud.age = 21;
    head->next->next->stud.score = 65;
    head->next->next->stud.place = "KPI";
    head->next->next->next = NULL;

    // printList(head);
    printf("-------------\n");
    // push(head, 4);
    // printList(head);
    // printf("-------------\n");
    push_start(&head, "Denis", 19, 91, "PTI");
    // printList(head);


    FILE* file = fopen("students.csv", "a");
    if (file != NULL)
    {
        node * current = head;

        while (current != NULL) {
            fprintf(file, "%s : %s \n", current->stud.name, current->stud.place);
            // printf("Address: %p\n", (void *)current->next);
            current = current->next;
        }
        fclose(file);
    } else {
        printf("file not found");
    }

    return 0;
}

// void push(node * head, int value)
// {
//     node * current = head;

//     while (current->next != NULL) {
//         current = current->next;
//     }
//     current->next = malloc(sizeof(node));
//     current->next->value = value;
//     current->next->next = NULL;
// }

//node ** head
//double pointer - передаем указатель на переменную указателя
void push_start(node ** head, string name, int age, int score, string place)
{
    node * new_node;
    new_node = malloc(sizeof(node));

    // new_node->stud = stud;
    new_node->stud.name = name;
    new_node->stud.age = age;
    new_node->stud.score = score;
    new_node->stud.place = place;
    new_node->next  = *head;
    *head = new_node;
}


// void printList(node * head)
// {
//     node * current = head;

//     while (current != NULL) {
//         // printf("Value: %d\n", current->value);
//         printf("%s : %i : %i : %s %\n", current->stud.name, current->stud.age, current->stud.score, current->stud.place);
//         printf("Address: %p\n", (void *)current->next);
//         current = current->next;
//     }
// }