

#include <stdlib.h>
typedef struct {
    int *data;
    int front;
    int rear;
    int k;
    int count;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue*Ringbuffer=(MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    Ringbuffer->data=malloc(k*sizeof(int));
    Ringbuffer->front=0;
    Ringbuffer->rear=0;
    Ringbuffer->k=k;
    Ringbuffer->count=0;
    return Ringbuffer;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if((obj->count!=obj->k)&&(obj->rear<obj->k))
    {
        obj->data[obj->rear]=value;
        obj->rear++;
        obj->count++;
        return true;
    }
    else if((obj->count!=obj->k)&&(obj->rear>=obj->k))
    {
        obj->rear=0;
        obj->data[obj->rear]=value;
        obj->rear++;
        obj->count++;
        return true;
    }
    else return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if((obj->count!=0)&&(obj->front<(obj->k)-1))
    {
        obj->front++;
        obj->count--;
        return true;
    }
    else if((obj->count!=0)&&(obj->front==(obj->k)-1))
    {
        obj->front=0;
        obj->count--;
        return true;
    }
    else
    {
        return false;
    }
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->count==0)
    {
        return -1;
    }
    else
    {
        return obj->data[obj->front];
    }
}

int myCircularQueueRear(MyCircularQueue* obj) {
        if(obj->count==0)
    {
        return -1;
    }
    else
    {
    return obj->data[obj->rear-1];
    }
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    if(obj->count==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    if(obj->count==obj->k)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->data);
    free(obj);
}