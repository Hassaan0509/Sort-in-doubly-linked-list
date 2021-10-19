#include "header.h"

list::~list()
{
    node* temp1 = head;
    node* temp2 = temp1;
    while (temp1!=NULL)
    {
        temp1 = temp1->next;
        delete temp2;
        temp2 = temp1;
    }
    delete temp1;
}

//DoublyLinkedList<T>::~DoublyLinkedList() {
//    // Initialize traversal and trailing Nodes
//    Node* trav = head;
//    Node* trail = trav;
//    // While traversal Node isn't null (end of list not yet reached)...
//    while (trav != nullptr) {
//        // Iterate traversal node
//        trav = trav->next;
//        // Delete trailing node
//        delete(trail);
//        // Assign trailing node to traversal node
//        trail = trav;
//    }
//}