#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL)
        printf("Stack Empty\n");
    else {
        struct Node *temp = top;
        printf("%d popped\n", temp->data);
        top = top->next;
        free(temp);
    }
}

void display() {
    struct Node *temp = top;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(5);
    push(15);
    push(25);
    display();
    pop();
    display();
}