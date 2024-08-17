#include <iostream>
#include "lib.h"

// constructor
linkedList::linkedList() : head(nullptr) {}

// destructor
linkedList::~linkedList() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// insert node at head of linked list
void linkedList::insertHead(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// insert node at end of linked list
void linkedList::insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// delete node
void linkedList::remove(int value) {
    if (head == nullptr) {
        std::cout << "nothig to delete, the list is empty" << std::endl;
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current ->data != value) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        std::cout << "Node containing " << value << "not found" << std ::endl;
        return;
    }

    previous->next = current ->next;
    delete current;
}

// display linked list
void linkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "End of list" << std::endl;
}
