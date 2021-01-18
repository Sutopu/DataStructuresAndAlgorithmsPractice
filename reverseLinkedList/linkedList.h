#include <stdlib.h>

using namespace std;

class linkedList {
    public:
        linkedList();
        linkedList(int);
        ~linkedList();
        void append(int);
        int pop();
        void printList();
        
    private:
        struct Node {
            int data;
            Node* next;
        };
        Node* head;
        Node* tail;
};