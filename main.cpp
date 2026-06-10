/*
 * file:  proj7-TestMain.cpp
 * author:  Mark Josephs
 * course: CSI 1440
 * assignment:  Project 7
 * due date:  4/2/2023
 *
 * date modified:  4/1/2023
 *      - wrote program
 *
 */

#include <iostream>
#include "MyVector.h"

using namespace std;


int main() {

    MyVector<int> vec1;
    MyVector<char> vec2;
    MyVector<double> vec3;

    //testing push_front Function
    cout << "**TESTING push_front FUNCTION**" << endl;

    vec1.push_front(1);
    vec1.push_front(2);
    vec1.push_front(3);
    vec1.push_front(4);
    vec1.push_front(5);

    vec2.push_front('A');
    vec2.push_front('B');
    vec2.push_front('C');
    vec2.push_front('D');

    vec3.push_front(.1);
    vec3.push_front(.2);
    vec3.push_front(.3);
    vec3.push_front(-.1);

    vec1.print_vector();
    vec2.print_vector();
    vec3.print_vector();

    cout << endl << "should be: " << endl << "5 4 3 2 1" << endl << "D C B A" << endl << "-0.1 0.3 0.2 0.1" << endl;

    //testing push_back function
    cout << endl << "**TESTING push_back FUNCTION**" << endl;

    vec1.push_back(900);
    vec1.push_back(-10);

    vec2.push_back('Z');
    vec2.push_back('M');
    vec2.push_back('L');

    vec3.push_back(.90);
    vec3.push_back(.80);
    vec3.push_back(.70);

    vec1.print_vector();
    vec2.print_vector();
    vec3.print_vector();

    cout << endl << "should be: " << endl << "5 4 3 2 1 900 -10" << endl << "D C B A Z M L" << endl << "-0.1 0.3 0.2 0.1 0.9 0.8 0.7" << endl;

    // //testing popFront function
    // cout << endl << "**TESTING POPFRONT FUNCTION**" << endl;
    // int a;
    // vec1.popFront(a);
    // vec1.popFront(a);
    // vec1.popFront(a);
    //
    // char b;
    // vec2.popFront(b);
    // vec2.popFront(b);
    // vec2.popFront(b);
    //
    // double c;
    // vec3.popFront(c);
    // vec3.popFront(c);
    // vec3.popFront(c);
    //
    // vec1.print_vector();
    // vec2.print_vector();
    // vec3.print_vector();
    //
    // cout << endl << "should be: " << endl << "2 1 900 -10" << endl << "A Z M L" << endl << "0.1 0.9 0.8 0.7" << endl;


    //testing pop_back function

    cout << endl << "**TESTING pop_back FUNCTION**" << endl;

    vec1.pop_back(a);
    vec1.pop_back(a);

    vec2.pop_back(b);
    vec2.pop_back(b);

    vec3.pop_back(c);
    vec3.pop_back(c);

    vec1.print_vector();
    vec2.print_vector();
    vec3.print_vector();

    cout << endl << "should be: " << endl << "2 1" << endl << "A Z" << endl << "0.1 0.9" << endl;


    // //testing front function
    // cout << endl << "**TESTING FRONT FUNCTION**" << endl;
    //
    // cout << "front of vec1: " << vec1.front() << endl;
    // cout << "should be: 2" << endl << endl;
    //
    // cout << "front of vec2: " << vec2.front() << endl;
    // cout << "should be: A" << endl << endl;
    //
    // cout << "front of vec3: " << vec3.front() << endl;
    // cout << "should be: 0.1" << endl << endl;


    //testing back function
    // cout << endl << "**TESTING BACK FUNCTION**" << endl;
    //
    // cout << "back of vec1: " << vec1.back() << endl;
    // cout << "should be: 1" << endl << endl;
    //
    // cout << "front of vec2: " << vec2.back() << endl;
    // cout << "should be: Z" << endl << endl;
    //
    // cout << "front of vec3: " << vec3.back() << endl;
    // cout << "should be: 0.9" << endl << endl;
    //
    // //testing overloaded [] function
    // cout << endl << "**TESTING OVERLOADED [] FUNCTION**" << endl;
    //
    // cout << vec1[1] << endl;
    // cout << "should be: 1" << endl << endl;
    //
    // cout << vec2[1] << endl;
    // cout << "should be: Z" << endl << endl;
    //
    // cout << vec3[1] << endl;
    // cout << "should be: 0.9" << endl << endl;

    // //testing getSize function
    // cout << endl << "**TESTING GETSIZE FUNCTION**" << endl;
    //
    // cout << vec1.getSize() << endl;
    // cout << "should be: 2" << endl << endl;
    //
    // cout << vec2.getSize() << endl;
    // cout << "should be: 2" << endl << endl;
    //
    // cout << vec3.getSize() << endl;
    // cout << "should be: 2" << endl << endl;


    //testing erase function
    // cout << endl << "**TESTING ERASE FUNCTION**" << endl;
    //
    // vec1.erase();
    // if(vec1.getSize() == 0){
    //     cout << "vec1 erased" << endl;
    // }
    //
    // vec2.erase();
    // if(vec2.getSize() == 0){
    //     cout << "vec2 erased" << endl;
    // }
    //
    // vec3.erase();
    // if(vec3.getSize() == 0){
    //     cout << "vec3 erased" << endl;
    // }
    //
    //
    // //testing isEmpty function
    // cout << endl << "**TESTING ISEMPTY FUNCTION**" << endl;
    //
    // cout << vec1.isEmpty() << endl;
    // cout << "should be: 1 (true)" << endl;
    //
    // cout << vec2.isEmpty() << endl;
    // cout << "should be: 1 (true)" << endl;
    //
    // cout << vec3.isEmpty() << endl;
    // cout << "should be: 1 (true)" << endl;

    return 0;
}
