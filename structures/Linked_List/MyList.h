
#ifndef VECTOR_SINGLYLINKEDLIST_H
#define VECTOR_SINGLYLINKEDLIST_H
using namespace std;


template <typename T>
class Node {
    public:
        T data;
        Node* next;

        Node(T new_data) {
            this->data = new_data;
            this->next = NULL;
        }
};

template <typename T>
class MyList {
    private:
        int size;
        Node<T>* head;



    public:

        MyList();

        MyList(T *data);

        bool isEmpty();
        void push_front(T new_data);
        void push_back(T new_data);
        void pop_front();
        void pop_back();
        void printList();
        int getSize();
        int front();
        int back();
        void erase();

        T& operator[](const T& element);
};

template<typename T>
MyList<T>::MyList(){
    head = nullptr;
}

template <typename T>
bool MyList<T> :: isEmpty() {
    if (head == nullptr) return true;
    return false;
}

template<typename T>
int MyList<T>::getSize() {
    int rv = 0;
    if (head == nullptr) return rv;
    Node<T>* temp = head;
    while (temp != nullptr) {
        ++rv;
        temp = temp->next;
    }
}

// template<typename T>
// void MyList<T>::push_back(T new_data) {
//
//     Node<T>* temp = head;
//
//     while (temp != nullptr) {
//         temp = temp->next;
//     }
//
//     temp->next = new Node<T>(new_data);
// }
//
// template<typename T>
// void MyList<T>::push_front(T new_data) {
//     MyList<int> new_list;
//     new_list.push_back(new_data);
//
//     Node<T>* temp = head + 1;
//
//     while (temp != nullptr) {
//         new_list.push_back(temp->data);
//         temp = temp->next;
//     }
//
// }

#endif //VECTOR_SINGLYLINKEDLIST_H
