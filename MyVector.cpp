#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> vec1;
    for (int i=0; i<5; i++) {
        vec1.push_back(i);
    }
    vec1.print_vector();
    return 0;
}