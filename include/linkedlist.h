#pragma once
class node
{   public:
        int info;
        node *next;
        node(){}
        node(int d):info(d),next(nullptr){}
        node(int d, node * next):info(d),next(next){}
};

class linkedlist
{
    private:
        node* HEAD;
        node* TAIL;

    public:
        linkedlist();
        
        void add(node *pred,int data);
        void addToHead(int data);
        void addToTail(int data);

        bool remove(int data);
        bool removeFromHead(int &data);
        bool removeFromTail(int &data);

        bool retrieve(int data, node **outputPtr);
        bool search(int data);
        
        bool isEmpty();

        void print();

         ~linkedlist();
};