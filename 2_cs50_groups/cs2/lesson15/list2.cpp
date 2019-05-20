#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>

// using namespace std;

typedef struct node
{
    // std::string name;
    const char* name;
    int age;
    char score;
    struct node* next;
    struct node* prev;
} node_t;//node_t

// void push(node_t * head, int value);
// void push_start(node_t ** head, int value);
void printList(node_t * head);
// bool search (node_t* head, int value);
int main(void){
    // node_t* head1;// = NULL;
    node_t* head = NULL;
    // cout << head1 << endl;
    // cout << head2 << endl;
    head = (node_t*)malloc(sizeof(node));
    if (head == NULL) {
        return 1;
    }
    head->name="Mike";
    head->age = 21;
    head->score = 'B';
    head->next = (node_t*)malloc(sizeof(node));
    head->prev = NULL;

    head->next->name="Mike";
    head->next->age = 23;
    head->next->score = 'A';
    head->next->next = NULL;
    head->next->prev = head->next;

    printList(head);

    // head->next = (node_t*)malloc(sizeof(node));
    // head->next->value = 2;
    // head->next->next = NULL;
    // printList(head);
    // cout << "----------------" << endl;
    // push(head,3);
    // printList(head);
    // cout << "----------------" << endl;
    // push_start(&head,0);
    // printList(head);
    // cout << "----------------" << endl;
    // int x = 3;
    // cout << "search of element " << x << " in list gives " << search(head, x) << endl;

    return 0;
}
// void push_start(node_t ** head, int value){
//     node* new_node;
//     new_node = (node_t*)malloc(sizeof(node));

//     new_node->value = value;
//     new_node->next = *head;
//     *head = new_node;
// }

// void push(node_t * head, int value){
//     node_t* current = head;
//     while (current->next != NULL){
//         current = current->next;
//     }
//     current->next = (node_t*)malloc(sizeof(node));
//     current->next->value = value;
//     current->next->next = NULL;
// }

void printList(node_t* head) {
    // node_t* current = head;
    // while (current != NULL) {
    //     cout << "Name:   "  << current->name << endl;
    //     cout << "Age:   "   << current->name << endl;
    //     cout << "Score:   " << current->name << endl;
    //     cout << "Address prev: " << (void*)current->prev << endl;
    //     cout << "Address next: " << (void*)current->next << endl;
    //     current = current->next;
    // }
    node_t *p;
    p = head;
    do {
        std::cout << "Name " << p->name << std::endl;
        std::cout << "Age "  << p->age << std::endl;
        std::cout << "Score " << p->score << std::endl;
        std::cout << "Score " << (void*)p->next << std::endl;
        std::cout << "Score " << (void*)p->prev << std::endl;
        // printf("%d ", p->field); // вывод значения элемента p
        p = p->next; // переход к следующему узлу
    } while (p != NULL); // условие окончания обхода

}

// bool search (node_t* head, int value)
// {
//   node_t* ptr = head;
//   while (ptr != NULL)
//   {
//     if(ptr -> value == value)
//     {
//       return true;
//     }
//     ptr = ptr -> next;
//   }
//   return false;
// }