#include <iostream>
#include "arrayList.h"

using namespace std;

int main() {
    //optimally i would test using a bash script that tested my program against a multitude of test cases.
    ArrayList list = ArrayList();
    cout << "wow an array list!" << endl;
    list.append(1);
    list.append(2);
    list.append(4);
    list.printArray();
    list.remove(0);
    list.printArray();
    list.remove(0);
    list.printArray();
    list.remove(0);
    list.printArray();
    list.append(9);
    list.append(8);
    list.append(7);
    list.printArray();
    list.insert(1, 4);
    list.printArray();
    list.insert(0, 4);
    list.printArray();
    list.insert(5, 4);
    list.printArray();
}