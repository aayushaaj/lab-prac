#include <iostream>
#include "../include/linkedlist.h"

int main()
{
        linkedlist list; // Creates a new linked list

        list.addToHead(1); 
        list.addToHead(10); 
        list.addToHead(20);
        list.addToTail(4); 
        list.addToHead(30);;
        list.addToTail(40);
        list.addToTail(50);
        std::cout<<"Linked List: \n";
        list.print();

        std::cout<<"Traversing Linked List: \n";
        list.traverse();
}












  // if (list.isEmpty()) // Checks if the list is empty
        // {
        //     std::cout << "List is empty.\n";
        // } 
        // else {
        //     std::cout << "List is not empty.\n";
        // }
















//          // Adds some nodes to the head of the list
//         list.addToHead(1);
//         list.addToHead(2);
//         list.addToHead(3);
//         list.addToHead(4);
//         list.addToTail(10);
//         list.addToTail(20);

//         // Prints out the nodes in the list
//         list.print();
//         int data;
//         list.removeFromHead(data);
//         std::cout<<"Updated Linked List (removed from head) \n";
//         list.print();

//         list.removeFromTail(data);
//         std::cout<<"Updated Linked List (removed from tail) \n";
//         list.print();

//         
//         // Searches for a specific node in the list
//         list.search(10) ? std::cout << "Node found\n" : std::cout << "Node not found\n";

//         list.remove(3);
//         std::cout<<"Updated Linked List\n";
//         std::cout<<"After removing 3:\n";
//         list.print();

//         return 0;
// }