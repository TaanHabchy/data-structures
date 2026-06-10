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
        void pop_front();
        void pop_back();
        void print_vector();
        int front();
        int back();
        int getSize();
        void erase();
        bool isEmpty();

        T& operator[](const T& element);
};

// constructor to initiate default vector
template<typename T>
MyVector<T>::MyVector() : size(0), capacity(3) {
    arr = new T[capacity];
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


// erase the data in the first allocated block of memory
// iterate through the vector, shifting everything to the left
// pop_front
template<typename T>
void MyVector<T>::pop_front() {
    // delete arr[0];
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i+1];
    }
    --size;
}


//
template<typename T>
void MyVector<T>::pop_back() {
    T* tempArr = new T[capacity];
    for (int i = 0; i < size - 1; ++i) {
        tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
    --size;
}

// Resize Function
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

template <typename T>
void MyVector<T>::print_vector() {
    cout << "My vector: ";
    for (int i = 0; i != size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
int MyVector<T>::front() {
        return arr[0];
}

template <typename T>
int MyVector<T>::back() {
    if (size > 0) {
        return arr[size-1];
    }
    return -1;
}

template <typename T>
int MyVector<T>::getSize() {
    return size;
}

template <typename T>
void MyVector<T>::erase() {
    T* tempArr = new T[capacity];
    delete[] arr;
    arr = tempArr;
    size = 0;
    capacity = 0;
}

template <typename T>
bool MyVector<T>::isEmpty() {
    if (!arr[0] && size == 0) {
        return 1;
    }
    return 0;
}



template <typename T>
T& MyVector<T>::operator[](const T& element) {
    return arr[0];
}



