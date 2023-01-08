#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*front=NULL,*rear=NULL;
void enqueue(int x){
    struct Node*t;
    t=new Node;
    if(t==NULL){
        cout<<"Queue is full"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
           rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    struct Node*p;
    int x=1;
    if(front==NULL){
        cout<<"queue is empty";
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete(p);
    }
    return x;
}
void display(){
    struct Node*p;
    p=front;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    enqueue(5);
    enqueue(10);
    enqueue(3);
    enqueue(12);
    enqueue(34);
    cout<<"deleted element is "<<dequeue()<<endl;
    display();
    return 0;
}
