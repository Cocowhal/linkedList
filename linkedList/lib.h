#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class linkedList {
    private:
        Node* head;

    public:
        linkedList();
        ~linkedList();

        void insertHead(int value);
        void insertEnd(int value);
        void remove(int value);
        void display();
};

#endif // LINKEDLIST_H