cmake_minimum_required(VERSION 4.2)
project(structures)

set(CMAKE_CXX_STANDARD 20)

add_executable(vector
        structures/vector/MyVector.cpp
        structures/vector/MyVector.h
)

add_executable(singlyLinkedList
        structures/Linked_List/MyList.cpp
        structures/Linked_List/MyList.h
)
