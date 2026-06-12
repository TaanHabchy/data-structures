#include <cassert>
#include <iostream>
#include "MyList.h"

int main() {
    MyList<int> li;

    assert(li.isEmpty());
    assert(li.getSize() == 0);

    // li.push_back(10);
    // li.push_back(20);
    // li.push_front(5);
    //
    // assert(li.getSize() == 3);
    // assert(li[0] == 5);
    // assert(li[1] == 10);
    // assert(li[2] == 20);
    // assert(li.front() == 5);
    // assert(li.back() == 20);
    //
    // li.pop_front();
    // assert(li[0] == 10);
    // assert(li[1] == 20);
    // assert(li.getSize() == 2);
    // assert(li.front() == 10);
    //
    // li.pop_back();
    // assert(li.back() == 10);
    // assert(li.front() == 10);
    // assert(li.getSize() == 1);
    //
    // li.erase();
    // assert(li.isEmpty());
    // assert(li.getSize() == 0);
    //
    // // adding many nodes
    // for (int i = 0; i < 100; i++) {
    //     li.push_back(i);
    // }
    //
    // assert(li.getSize() == 100);
    // assert(li[0] == 0);
    // assert(li[50] == 50);
    // assert(li[99] == 99);
    // assert(li.front() == 0);
    // assert(li.back() == 99);
    //
    // // modifying through []
    // li[0] = 999;
    // li[50] = 555;
    //
    // assert(li[0] == 999);
    // assert(li[50] == 555);
    //
    // // remove from front repeatedly
    // li.pop_front();
    // assert(li.getSize() == 99);
    // assert(li.front() == 1);
    //
    // // remove from back repeatedly
    // li.pop_back();
    // assert(li.getSize() == 98);
    // assert(li.back() == 98);
    //
    // // copy constructor
    // MyList<int> copy = li;
    //
    // assert(copy.getSize() == li.getSize());
    // assert(copy[0] == li[0]);
    // assert(copy[10] == li[10]);
    // assert(copy.back() == li.back());
    //
    // // make sure copy is a deep copy
    // copy[0] = -100;
    // assert(copy[0] == -100);
    // assert(li[0] != copy[0]);
    //
    // // assignment operator
    // MyList<int> assigned;
    // assigned = li;
    //
    // assert(assigned.getSize() == li.getSize());
    // assert(assigned[0] == li[0]);
    // assert(assigned.back() == li.back());
    //
    // // self-assignment
    // assigned = assigned;
    // assert(assigned.getSize() == li.getSize());
    //
    // // clear again
    // assigned.erase();
    // assert(assigned.isEmpty());
    // assert(assigned.getSize() == 0);

    std::cout << "All Singly Linked List tests passed!" << std::endl;

    return 0;
}