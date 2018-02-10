#include <iostream>
#include "linked-list.hpp"

LinkedList::LinkedList()
{
    first = true;
    //CreateList();
    //start->prev = NULL;
    //start->data = NULL;
    //start->next = NULL;
}

/*
void 
LinkedList::CreateList()
{

    struct llnode *s, *temp;
    temp = new (struct llnode);
    temp->data = NULL;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
  
}*/

void 
LinkedList::ShowList()
{
    struct llnode *temp;
    if(!first)
    {
        std::cout << "Node:" << start->data << std::endl;
        temp = start;
        while(temp->next != NULL)
        {
            temp = temp->next;
             std::cout << "Node:" << temp->data << std::endl;
        }
    }
    return;
}

void 
LinkedList::AddNode(int data)
{
    struct llnode *newNode = new (struct llnode);
    if (first)
    {
        //newNode->prev = NULL;
        //newNode->data = data;
        //newNode->next = start; 
        start = newNode;
        start->data = data;
        first = false;
        return;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = start;
    start->prev = newNode;
    start = newNode;
    return;
}
