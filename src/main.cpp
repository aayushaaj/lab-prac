#include <iostream>
#include "../include/linkedlist.h"

int main()
{
        linkedlist list;

         // Adds some nodes to the head of the list
        list.addToHead(1);
        list.addToHead(2);
        list.addToHead(3);
        list.addToHead(4);
        list.addToTail(10);
        list.addToTail(20);

        // Checks if the list is initially empty
        if (list.isEmpty()) {
            std::cout << "List is empty.\n";
        } 
        else {
            std::cout << "List is not empty.\n";
        }

        // Prints out the nodes in the list
        list.print();
        int data;
        list.removeFromHead(data);
        std::cout<<"Updated Linked List\n";
        std::cout<<"After removing from head\n";
        list.print();

        list.removeFromTail(data);
        std::cout<<"Updated Linked List\n";
        std::cout<<"After removing from tail\n";
        list.print();

        node* myNode;
        bool found = list.retrieve(1, &myNode);
        if (found) {
            std::cout << "Node found: " << myNode->info << std::endl;
        } 
        else {
            std::cout << "Node not found.\n";
        }

        list.search(10) ? std::cout << "Node found\n" : std::cout << "Node not found\n";

        list.remove(3);
        std::cout<<"Updated Linked List\n";
        std::cout<<"After removing 3:\n";
        list.print();

        return 0;
}