#include <iostream>
#include "linked-list.cpp"

using namespace std;

int  main()
{
    LinkedList dll;
    dll.AddNode(1);
    dll.AddNode(5);
    dll.AddNode(100);
    dll.AddNode(5);
    dll.ShowList();
    return 0;
}

