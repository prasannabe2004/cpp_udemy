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

Node *LinkedList::get(int index) {
    Node *ptr = head;
    if(index < 0 || index > length)
        return nullptr;
    for(int i = 0; i < index; i++) {
        ptr = ptr->next;
    }
    return ptr;
}

bool LinkedList::set(int index, int value) {
    Node *t = get(index);
    if(t) {
        t->value = value;
        return true;
    }
    return false;
}

bool LinkedList::insert(int index, int value) {
    if(index < 0 || index >= length)
        return false;
    if(index == 0) {
        prepend(value);
        return true;
    }
    if(index == length) {
        append(value);
        return true;
    }
    Node *p = makeNode(value);
    Node *t = get(index - 1);
    p->next = t->next;
    t->next = p;
    length++;
    return true;
}

void LinkedList::deleteNode(int index) {
    if(index < 0 || index >= length)
        return;
    if(index == 0)
        return deleteFirst();
    if(index == (length - 1))
        return deleteLast();
    Node *p = get(index - 1);
    Node *t = p->next;
    p->next = t->next;
    delete t;
    length--;
}

void LinkedList::reverse(void) {
    Node *t = head;
    head = tail;
    tail = t;

    Node *before = nullptr;
    Node *after = t->next;
    for(int i = 0; i < length; i++) {
        after = t->next;
        t->next = before;
        before = t;
        t = after;
    }
}