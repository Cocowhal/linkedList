#include <iostream>
#include "lib.h"

int main() {
    linkedList list;

    list.insertHead(3);
    list.insertHead(4);
    list.insertEnd(1);
    list.insertEnd(2);
    list.display();
    list.remove(2);
    list.display();

    return 0;
}