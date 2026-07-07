#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node * next;
};

void traversal(struct Node * head){
    struct Node * ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr!=head);
    
}

struct Node * insertAtfirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   
    ptr->data = data;

     struct Node * p = head->next;
     while(p->next!=head){
        p = p->next;
     }
     p->next = ptr;
     ptr->next = head;
     head = ptr;
     return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * thrid;
    struct Node * fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thrid = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = second;

    second->data= 11;
    second->next = thrid;

    thrid->data = 87;
    thrid->next = fourth;
    
    fourth->data = 76;
    fourth->next = head;
    
    printf("Linked list before insertion\n");
    traversal(head);
    head = insertAtfirst(head, 65);
    head = insertAtfirst(head, 86);
    head = insertAtfirst(head, 34);
    printf("Linked list aftter insertion\n");
     traversal(head);
    return 0;
}