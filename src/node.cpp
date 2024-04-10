#include "linkedlist.h"

void linkedlist::addtohead(int data){
    node *newnode =new node(data, HEAD);
    
    
    
}
void linkedlist::add(node *pred,int data)
{   node *newnode;
    newnode->info=data;
    newnode->next=pred->next;
    pred->next=newnode;
}
void addtotail(int data);

    bool linkedlist::remove(int data){}
    bool linkedlist::removeFromHead(int &data){}
    bool linkedlist::removeFromTail(int &data){}

    bool linkedlist::isempty(){}

    void linkedlist::head(int &data){}
