#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef struct node
{
    int value;
    struct node* next;
} node_t;//node_t
void push(node_t * head, int value);
void push_start(node_t ** head, int value);
void printList(node_t * head);
int main(void){
    node_t* head = NULL;
    head = (node_t*)malloc(sizeof(node));
    if (head == NULL) {
        return 1;
    }
    head->value=1;
    // head->next = NULL;
    head->next = (node_t*)malloc(sizeof(node));
    head->next->value = 2;
    head->next->next = NULL;
    printList(head);
    cout << "----------------" << endl;
    push(head,3);
    printList(head);
    cout << "----------------" << endl;

    return 0;
}

void push(node_t * head, int value){
    node_t* current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = (node_t*)malloc(sizeof(node));
    current->next->value = value;
    current->next->next = NULL;
}

void printList(node_t* head) {
    node_t* current = head;
    while (current != NULL) {
        cout << "Value:   " << current->value << endl;
        cout << "Address: " << (void*)current->next << endl;
        current = current->next;
    }
}
