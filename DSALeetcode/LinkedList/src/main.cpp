#include <iostream>

#include "LinkedList.h"

int main()
{
    LinkedList* ll = new LinkedList(10);
    std::cout << "Length: " << ll->getLength() << std::endl;
    // Delete last Single node list
    ll->deleteLast();
    // Delete last Zero node list
    ll->deleteLast();
    // Delete last 1+ node list
    ll->append(10);
    ll->append(10);
    ll->append(20);
    ll->append(30);
    ll->append(40);
    ll->append(50);

    ll->printList();
    ll->deleteLast();
    ll->deleteLast();
    ll->deleteLast();
    ll->printList();

    ll->prepend(1);
    ll->printList();

    ll->deleteFirst();
    ll->printList();

    Node *t;
    t = ll->get(2);
    if(t) {
        std::cout << t->value << "\n";
    }
    ll->set(2, 200);
    ll->printList();
    ll->insert(1,300);
    ll->printList();
    ll->deleteNode(3);
    ll->printList();
    ll->reverse();
    ll->printList();
    ll->append(20);
    ll->append(30);
    ll->append(40);
    ll->printList();
    Node * mid = ll->findMiddleNode();
    std::cout << mid->value << "\n";
    std::cout << ll->hasLoop() << "\n";
    std::cout << ll->findKthFromEnd(3)->value << "\n";
    return 0;
}
