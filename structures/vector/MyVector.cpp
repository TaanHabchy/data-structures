#include <cassert>
#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> v;

    assert(v.isEmpty());
    assert(v.getSize() == 0);

    v.push_back(10);
    v.push_back(20);
    v.push_front(5);

    assert(v.getSize() == 3);
    assert(v[0] == 5);
    assert(v[1] == 10);
    assert(v[2] == 20);
    assert(v.front() == 5);
    assert(v.back() == 20);

    v.pop_front();
    assert(v[0] == 10);
    assert(v.getSize() == 2);

    v.pop_back();
    assert(v.back() == 10);
    assert(v.getSize() == 1);

    v.erase();
    assert(v.isEmpty());
    assert(v.getSize() == 0);

    // resizing past capacity
    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }
    assert(v.getSize() == 100);
    assert(v[0] == 0);
    assert(v[99] == 99);

    // modifying through []
    v[0] = 999;
    assert(v[0] == 999);

    // copy constructor / assignment operator
    MyVector<int> copy = v;
    assert(copy[0] == v[0]);

    std::cout << "All tests passed!" << std::endl;
}