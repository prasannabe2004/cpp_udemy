#pragma once
#include <string>
#include "Node.h"

class LinkedList {
  private:
		Node* head;
        Node * tail;
        int length;

    public:
		LinkedList(int);
    ~LinkedList();
    void printList();
    Node* getHead();
    Node* getTail();
    int getLength();
    void append(int);
    void deleteLast();
    void prepend(int);
    void deleteFirst(void);
    Node *get(int index);
    bool set(int index, int value);
    bool insert(int index, int value);
    void deleteNode(int index);
    void reverse(void);
    Node *findMiddleNode();
    bool hasLoop();
    Node* findKthFromEnd(int k);
};