#include <iostream>
#include "linkedList.h"

using namespace std;

int main() {
    linkedList l = linkedList();
    l.append(1);
    l.append(2);
    l.append(3);
    l.printList();
    l.pop();
    l.printList();
    l.pop();
    l.printList();
}