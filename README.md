# Linked List Implementation in C++

<p>This project is for a simple implementation of a singly linked list in C++. <br>
It includes functions to add nodes to the head or tail of the list, remove nodes from the head or tail, check if the list is empty, and print the nodes in the list.
</p>

##  Understanding the LinkedList Class

The `LinkedList` class is a singly linked list implementation. Each node in the list contains an integer data value and a pointer to the next node. The `LinkedList` class maintains a pointer to the head node for easy access.

The class provides several functions for manipulating the list:

- `addToHead` and `addToTail` add a new node to the beginning or end of the list, respectively.
- `removeFromHead` and `removeFromTail` remove a node from the beginning or end of the list, respectively. `removeFromHead` also returns the data of the removed node.
- `isEmpty` checks whether the list is empty.
- `print` prints the data of all nodes in the list from head to tail.

This implementation provides understanding of the basics and working with linked lists. It can be extended to include more complex operations, such as sorting the list, reversing the list and more.

## Files included
- `main.cpp`: This is the driver program that demonstrates the usage of the linked list.
- `linkedlist.h`: This header file contains the declaration of the `LinkedList` and '`node` class and their member functions.
- `linkedlist.cpp`: This file contains the implementation of the `LinkedList` class and its member functions.

## Usage

To run the program,the source files needs to be compiled first and the resulting executable file needs to be run. Here's how it can be done:

In terminal, (inside the directory containing cpp files)

#### To compile the program
- g++ -o main main.cpp linkedlist.cpp

#### To Run the program
- ./main

## Functions used and their fucntionalities:

- #### addToHead(int data):<br>
      - Adds a new node with the given data to the head of the list. <br>
- #### addToTail(int data):<br>
      - Adds a new node with the given data to the tail of the list.  <br>
- #### removeFromHead(int &data):<br>
      - Removes the node at the head of the list and returns its data. <br>
- #### removeFromTail(): <br>
      - Removes the node at the tail of the list. <br>
- #### isEmpty():<br> 
      - Returns true if the list is empty and false otherwise. <br>
- #### print(): <br>
      - Prints out the nodes in the list. <br>

##  Project Structure

The project is structured in a simple way. The `main.cpp` file is the driver program that uses the `LinkedList` class to demonstrate various linked list operations. The `LinkedList` class is declared in the `linkedlist.h` header file and defined in the `linkedlist.cpp` file.

