#include <iostream>
using namespace std;

template <typename T>
class MyVector {
    private:
        T* arr;
        int size;
        int capacity;

       void resize();
    public:

        MyVector();

        void push_back(const T& element);
        void push_front(const T& element);
        // void pop_back(const T& element); // no parameter because you just pop it out
        void print_vector();
};

// constructor to initiate default vector
template<typename T>
MyVector<T>::MyVector() : size(0), capacity(3) {
    arr = new T[capacity];
}


// Resize Function
// arr points to mem A
// double the capacity, create a new arr with double capacity that points to mem B
// iterate through the elements in arr1, and make arr2 equal those
// delete arr1
// set arr1 = arr2
template <typename T>
void MyVector<T>::resize() {
    capacity *= 2;
    T* tempArr = new T[capacity];
    for (int i = 0; i < size; ++i) {
        tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
}

// push_back
// need to push to end of vector, need to check to see which index is the first one that's empty
// simply get the size, then if size < capacity, insert on size + 1, else resize then add
template<typename T>
void MyVector<T>::push_back(const T& element) {
    if (size >= capacity) {
        resize();
    }
        arr[size] = element;
        ++size;
}

// checks to see if the size < capacity
// if not resize()
// do memory addition so that each index in the array points to the next allocated block in memory
// set index 0 eqal to i
template<typename T>
void MyVector<T>::push_front(const T& element) {
    if (size >= capacity) {
        resize();
    }
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = element;
    ++size;
}
//
// // pop_back
// template<typename T>
// void MyVector<T>::pop_back(const T& element) {
//
// }


template <typename T>
void MyVector<T>::print_vector() {
    cout << "My vector: ";
    for (int i = 0; i != size; ++i) {
        cout << arr[i] << " ";
    }
}


