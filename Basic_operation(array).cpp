#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;//dynamically allocate during run time
};
void create(struct Queue *q,int size ){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int[q->size];
}
void enqueue(struct Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"queue is full";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q){
    int x=-1;
    if(q->front==q->rear){
        cout<<"queue is empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue*q){
    for(int i=q->front+1;i<=q->rear;i++){
        cout<<q->Q[i]<<" ";
    }
}
int main(){
    struct Queue q;
    create(&q,5);
    
    enqueue(&q,21);
    enqueue(&q,31);
    enqueue(&q,41);
    enqueue(&q,51);
    enqueue(&q,61);
    dequeue(&q);
    display(&q);
    return 0;
}
