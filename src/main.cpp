#include <iostream>
#include "../include/linkedlist.h"

int main()
{
        linkedlist list;

        // Check if the list is initially empty
        if (list.isEmpty()) {
            std::cout << "List is empty.\n";
        } else {
            std::cout << "List is not empty.\n";
        }

        // Add some nodes to the head of the list
        list.addToHead(1);
        list.addToHead(2);
        list.addToHead(3);

        // Print out the nodes in the list
        list.print();

        return 0;
}