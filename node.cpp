#include "linkedlist.h"
class node
{
    int info;
    node *next;
    node(){}
    node(int d):info(d),next(NULL){}
    node(int d, node * next):info(d),next(next){}
};