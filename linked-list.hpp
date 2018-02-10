/*

*/
#include <iostream>

struct llnode
{
    struct llnode *prev;
    int data;
    struct llnode *next;
};

class LinkedList
{
    bool first;
    struct llnode *start;
public:
    LinkedList();
    //void CreateList(int data);
    void AddNode(int data);
    void ShowList();
};

