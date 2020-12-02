#include <stdio.h>

using namespace std;

class ArrayList {
    public:
        ArrayList();
        ~ArrayList();
        void append(int);
        void remove(int);
        void insert(int, int);
        void get(int);
        void reallocate();
        void printArray();
        int end;
        int size;
        int* array; 
};