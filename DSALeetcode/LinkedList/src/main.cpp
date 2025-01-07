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

    return 0;
}
