#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList() {
    head = new Node;
    tail = head;
    head->next = NULL;
}

linkedList::linkedList(int data) {
    head = new Node;
    tail = head;
    head->data = data;
    head->next = NULL;
}

linkedList::~linkedList() {
    Node* curr = head;
    while (curr->next != NULL) {
        Node* tmp = curr;
        delete curr;
        curr = tmp->next;
    }
    delete curr;
}

void linkedList::append(int data) {
    tail->next = new Node;
    tail->next->data = data;
    tail = tail->next;
}

int linkedList::pop() {
    int data = tail->data;
    Node* curr = head;
    //make current the node before the last node in the list. This will be the new tail.
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    delete tail;
    tail = curr;
    tail->next = NULL;
    return data;
}

void linkedList::printList() {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}