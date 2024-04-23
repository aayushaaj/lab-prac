#include "../include/linkedlist.h"
#include <iostream>

// Constructor for the linked list
linkedlist::linkedlist()
{
    // Initializing the head and tail to null
    HEAD=nullptr;
    TAIL=nullptr;

}

// Checks if the linked list is empty
bool linkedlist::isEmpty()
{
    // If the head of the list is null, the list is empty
    if(HEAD==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Adds a new node to the head of the linked list
void linkedlist::addToHead(int data)
{
    
    node *newnode = new node;          // Creating a new node
    newnode->info=data;     // Setting the data of the new node
    newnode->next=HEAD;     // Setting the next pointer of the new node to the current head
    HEAD=newnode;           // Updating the head to the new node
    if (TAIL==nullptr)      // If the list was empty, this updates the tail to the newly added node
    {
        TAIL=HEAD;
    }
}

// Adds a new node to the tail of the linked list
void linkedlist::addToTail(int data)
{   
    
    node *newnode = new node;          // Creating a new node
    newnode->info=data;     // Setting the data of the new node
    newnode->next=nullptr;  // The new node is going to be the last node, so its next pointer is set to null
    if(!isEmpty())          // If the list is not empty, updates the next pointer of the current tail to the new node
    { 
        TAIL->next=newnode;
        TAIL=TAIL->next;
    }
    
    if(HEAD==nullptr)       // If the list was empty, this updates the head to the newly added node
    {
        HEAD=TAIL;
    }
}

// Add a new node after a specific node in the linked list
void linkedlist::add(node *pred,int data)
{   
    // If the specified node is null or the list is empty, this adds the new node to the head
    if(pred== nullptr || isEmpty())
    {
        addToHead(data);
    }
    else
    {
        node *newnode= new node;  // Creates a new node
        newnode->info=data;             // Sets the data of the new node
        newnode->next=pred->next;       // Sets the next pointer of the new node to the next pointer of the specified node
        pred->next=newnode;             // Updates the next pointer of the specified node to the new node
    }
}

// Removes the head of the linked list
bool linkedlist::removeFromHead(int &data)
{   
    
    node *NodeToDelete; // Creating a pointer to the node to delete
    // If the list is not empty
    if(!isEmpty())
    {
        
        NodeToDelete=HEAD;                  // Sets the node to delete to the head       
        HEAD=NodeToDelete->next;            // Updates the head to the next node        
        delete NodeToDelete;                // Deletes the old head
     // If the list is now empty, also updates the tail to null
        if(HEAD==nullptr)
        {
            TAIL=nullptr;
        }
        // Returns true indicating the node was successfully removed
        return true;
    }
    else
    {
        // If the list was empty, returns false
        return false;
    }
}

// Removes the tail of the linked list
bool linkedlist::removeFromTail(int &data)
{

    node *NodeToDelete;                     // Creates pointers to the node to delete and its predecessor
    node *pred;
   
    if(!isEmpty())                          // If the list is not empty
    {
        
        NodeToDelete=TAIL;                  // Sets the node to delete to the tail
        // If the list only contains one node
        if(HEAD==TAIL)
        {
           
            HEAD=TAIL=nullptr;              // Updates the head and tail to null
        }
        else
        {            
            pred=HEAD;                      // Finds the predecessor of the tail
            while(pred->next!=TAIL)
            {
                pred=pred->next;
            }         
            TAIL=pred;                     // Updates the tail to its predecessor
            pred->next=nullptr;            // Sets the next pointer of the new tail to null
        } 
        delete NodeToDelete;               // Deletes the old tail        
        return true;                       // Returns true indicating the node was successfully removed
    }
    else
    {
        // If the list was empty, return false
        return false;
    }
}

// Removes a specific node from the linked list
bool linkedlist::remove(int data)
{
    if(HEAD == nullptr) {
        // The list is empty, so there's nothing to remove.
        return false;
    }

    if(HEAD->info == data) {
        int tempData;
        removeFromHead(tempData);       // Removes the head
        return true;                    // Returns true indicating the node was successfully removed
    }

    // Creates pointers to the current node and its predecessor
    node *temp = HEAD->next;
    node *prev = HEAD;

    // Traversing through the list
    while(temp != nullptr)
    {
        if(temp->info == data)
        {
            prev->next = temp->next;

            if(temp == TAIL)
            {
                TAIL = prev;
            }

            node* toDelete = temp;
            temp = temp->next; // Move temp to next node before deleting

            delete toDelete; // Delete the node
            return true;
        }

        prev = temp;
        temp = temp->next;
    }

return false;
}

//Destructor for the linked list
linkedlist::~linkedlist() {
    node* current = HEAD;
    while (current != nullptr)          // Deletes each node in the list
    {
        node* next = current->next;
        delete current;
        current = next; 
    }
    HEAD = TAIL = nullptr;              // Deletes each node and sets the head and tail to null
}

// Prints out the nodes in the linked list
void linkedlist::print() {
    node* temp = HEAD;
    while (temp != nullptr) 
    {
        std::cout << temp->info << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}