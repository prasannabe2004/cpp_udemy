#include <iostream>

#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(int value) {
    Node *new_node = makeNode(value);
    head = new_node;
    tail = new_node;
    length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

Node* LinkedList::getHead() {
    return head;
}

Node* LinkedList::getTail() {
    return tail;
}

int LinkedList::getLength() {
    return length;
}

void LinkedList::append(int value) {
    Node *new_node = makeNode(value);
    if(LinkedList::getLength() == 0) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    length++;
}

void LinkedList::deleteLast(void) {
    Node* ptr = getHead();
    Node* prev = getHead();
    if(LinkedList::getLength() == 0) {
        return;
    }
    if (LinkedList::getLength() == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        while(ptr->next != nullptr) {
            prev = ptr;
            ptr = ptr->next;
        }
        tail = prev;
        prev->next = nullptr;
    }
    length--;
    delete ptr;
}

void LinkedList::prepend(int value) {
    Node* new_node = makeNode(value);
    if(getLength() == 0) {
        head = new_node;
        tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
    length++;
}

void LinkedList::deleteFirst(void) {
    if(length == 0)
        return;
    Node* temp = head;
    if(length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;  
    }
    delete temp;
    length--;
}