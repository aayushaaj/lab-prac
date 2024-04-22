#include "../include/linkedlist.h"
#include <iostream>

// Constructor for the linked list
linkedlist::linkedlist()
{
    // Initialize the head and tail to null
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
    
    node *newnode;          // Creating a new node
    newnode->info=data;     // Setting the data of the new node
    newnode->next=HEAD;     // Setting the next pointer of the new node to the current head
    HEAD=newnode;           // Updating the head to the new node
    if (TAIL==nullptr)      // If the list was empty, also update the tail to the newly added node
    {
        TAIL=HEAD;
    }
}

// Adds a new node to the tail of the linked list
void linkedlist::addToTail(int data)
{   
    
    node *newnode;          // Creating a new node
    newnode->info=data;     // Setting the data of the new node
    newnode->next=nullptr;  // The new node is going to be the last node, so its next pointer is set to null
    if(!isEmpty())          // If the list is not empty, update the next pointer of the current tail to the new node
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
    // If the specified node is null or the list is empty, add the new node to the head
    if(pred== nullptr || isEmpty())
    {
        addToHead(data);
    }
    else
    {
        node *newnode= new node(data);  // Create a new node
        newnode->info=data;             // Set the data of the new node
        newnode->next=pred->next;       // Set the next pointer of the new node to the next pointer of the specified node
        pred->next=newnode;             // Update the next pointer of the specified node to the new node
    }
}

// Removes the head of the linked list
bool linkedlist::removeFromHead(int &data)
{   
    
    node *NodeToDelete; // Create a pointer to the node to delete
    // If the list is not empty
    if(!isEmpty())
    {
        
        NodeToDelete=HEAD;           // Set the node to delete to the head       
        HEAD=NodeToDelete->next;     // Update the head to the next node        
        delete NodeToDelete;         // Delete the old head
        // If the list is now empty, also update the tail to null
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

// Remove the tail of the linked list
bool linkedlist::removeFromTail(int &data)
{

    node *NodeToDelete;     // Create pointers to the node to delete and its predecessor
    node *pred;
   
    if(!isEmpty())           // If the list is not empty
    {
        
        NodeToDelete=TAIL;  // Set the node to delete to the tail
        // If the list only contains one node
        if(HEAD==TAIL)
        {
           
            HEAD=TAIL=nullptr;   // Update the head and tail to null
        }
        else
        {            
            pred=HEAD;  // Find the predecessor of the tail
            while(pred->next!=TAIL)
            {
                pred=pred->next;
            }         
            TAIL=pred;   // Update the tail to its predecessor
            pred->next=nullptr;             // Set the next pointer of the new tail to null
        } 
        delete NodeToDelete;        // Delete the old tail        
        return true;        // Return true indicating the node was successfully removed
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
    // If the list is empty, return false
    if(isEmpty())
    {
        return false;
    }

    // If the data of the head matches the data to be removed
    if(HEAD->info == data)
    {
        int tempData;
        
        removeFromHead(tempData);   // Remove the head
       
        return true;         // Return true indicating the node was successfully removed
    }

    // Create pointers to the current node and its predecessor
    node *temp = HEAD->next;
    node *prev = HEAD;

    // Traverse the list
    while(temp != nullptr)
    {
        // If the data of the current node matches the data to be removed
        if(temp->info == data)
        {
            
            prev->next = temp->next;    // Update the next pointer of the predecessor to the next node
        
            if(temp == TAIL)            // If the current node is the tail, update the tail to its predecessor
            {
                TAIL = prev;
            }
            
            delete temp;        // Delete the current node
            return true;      // Return true indicating the node was successfully removed  
        }
        // Move to the next node
        prev = temp;
        temp = temp->next;
    }

    // If the function has not returned by now, it means the data was not found in the list, so return false
    return false;
}

// // Get the data from the head of the list
// void linkedlist::head(int &data)
// {
//     // This function is currently empty and needs to be implemented
// }

void linkedlist::print() {
    node* temp = HEAD;
    while (temp != nullptr) {
        std::cout << temp->info << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}
// linkedlist::~linkedlist()
// {
//     while(!isEmpty())
//     {
//         removeFromHead();
//     }
// }