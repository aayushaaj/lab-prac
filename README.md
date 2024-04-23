# Linked List Implementation in C++

This project is for a simple implementation of a singly linked list in C++. <br>
It includes functions to add nodes to the head or tail of the list, remove nodes from the head or tail, check if the list is empty, and print the nodes in the list.

## Files included
- `main.cpp`: This is the driver program that demonstrates the usage of the linked list.
- `linkedlist.h`: This header file contains the declaration of the `LinkedList` and 'node' class and their member functions.
- `linkedlist.cpp`: This file contains the implementation of the `LinkedList` class and its member functions.

## Usage

To run the program,the source files needs to be compiled first and the resulting executable file needs to be run. Here's how it can be done:

In terminal, (inside the directory containing cpp files)
g++ -o main main.cpp linkedlist.cpp
./main

## Functions used and their fucntionality:
addToHead(int data):<br>
      Adds a new node with the given data to the head of the list.
addToTail(int data):<br>
      Adds a new node with the given data to the tail of the list.
removeFromHead(int &data): <br>
      Removes the node at the head of the list and returns its data.
removeFromTail(): <br>
      Removes the node at the tail of the list.
isEmpty(): <br> 
      Returns true if the list is empty and false otherwise.
print(): <br>
      Prints out the nodes in the list.
