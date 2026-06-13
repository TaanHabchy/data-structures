
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
    head = new Node<T>(NULL);
}

template <typename T>
bool MyList<T> :: isEmpty() {
    if (head->next == nullptr) return true;
    return false;
}

template<typename T>
int MyList<T>::getSize() {
    int rv = 0;
    if (head->next == nullptr) return rv;
    Node<T>* temp = head;
    while (temp->next != nullptr) {
        ++rv;
        temp = temp->next;
    }
    return rv;

}

template<typename T>
void MyList<T>::push_back(T new_data) {

    if (head->next == nullptr) {
         head->next = new Node<T>(new_data);
        return;
    }

    Node<T>* temp = head->next;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new Node<T>(new_data);
}

template<typename T>
void MyList<T>::push_front(T new_data) {
    MyList<int> new_list;
    new_list.push_back(new_data);

    Node<T>* temp = head->next;

    while (temp != nullptr) {
        new_list.push_back(temp->data);
        temp = temp->next;
    }
     head->next = new_list.head->next;
}

template<typename T>
T &MyList<T>::operator[](const T &index) {
    Node<T>* temp = head->next;
    for (int i = 0; i<index; i++) {
        temp = temp->next;
    }
    return temp->data;
}

template <typename T>
int MyList<T>::front() {
    return head->next->data;
}

template <typename T>
int MyList<T>::back() {

    Node<T>* temp = head->next;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    return temp->data;
}

template <typename T>
void MyList<T>::pop_front() {
    MyList<int> new_list;
    Node<T>* temp = head->next;

    while (temp->next != nullptr) {
        new_list.push_back(temp->next->data);
        temp = temp->next;
    }
    head->next = new_list.head->next;
}

template<typename T>
void MyList<T>::pop_back() {
    Node<T>*  previous = head;
    Node<T>* current = head->next;
    while (current->next != nullptr) {
        current = current->next;
        previous = previous->next;
    }

    delete current;
    previous->next = nullptr;
}

