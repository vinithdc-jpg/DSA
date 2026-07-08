#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct circularqueue *q){
    if(q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularqueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q, int val){
    if(isFull(q)){
        printf("The queue is overflow\n");
    }
    else{
        q->r = (q->r + 1)%q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularqueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("The queue is underflow\n");
    }
    else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularqueue q;
    q.size = 3;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size*sizeof(int));

    enqueue(&q, 43);
    enqueue(&q, 12);
    enqueue(&q, 98);
    enqueue(&q, 21);
    enqueue(&q, 43);
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
   
    if(isEmpty(&q)){
        printf("Queue is Empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}