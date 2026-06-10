#include <iostream>
#include "MyVector.h"

using namespace std;


int main() {

    MyVector<int> vec1;
    vector<int> realVec;

    //testing push_front Function
    cout << "**TESTING push_front FUNCTION**" << endl;

    vec1.push_front(1);
    vec1.push_front(2);
    vec1.push_front(3);
    vec1.push_front(4);
    vec1.push_front(5);

    vec1.print_vector();

    cout << endl << "should be: " << "5 4 3 2 1" << endl;

    //testing push_back function
    cout << endl << "**TESTING push_back FUNCTION**" << endl;

    vec1.push_back(900);
    vec1.push_back(-10);


    vec1.print_vector();

    cout << endl << "should be: " << "5 4 3 2 1 900 -10" << endl;

    // //testing pop_front function
    cout << endl << "**TESTING POPFRONT FUNCTION**" << endl;
    vec1.pop_front();
    vec1.pop_front();
    vec1.pop_front();
    
    vec1.print_vector();
    
    cout << endl << "should be: " << "2 1 900 -10" << endl;


    //testing pop_back function

    cout << endl << "**TESTING pop_back FUNCTION**" << endl;

    vec1.pop_back();
    vec1.pop_back();
    //
    vec1.print_vector();
    //
    cout << endl << "should be: "  << "2 1" << endl;


    //testing front function
    cout << endl << "**TESTING FRONT FUNCTION**" << endl;

    cout << "front of vec1: " << vec1.front() << endl;
    cout << "should be: 2" << endl << endl;


    //testing back function
    cout << endl << "**TESTING BACK FUNCTION**" << endl;

    cout << "back of vec1: " << vec1.back() << endl;
    cout << "should be: 1" << endl << endl;

    // //testing overloaded [] function
    cout << endl << "**TESTING OVERLOADED [] FUNCTION**" << endl;
    //
    cout << vec1[0] << endl;
    cout << "should be: 2" << endl << endl;

    //testing getSize function
    cout << endl << "**TESTING GETSIZE FUNCTION**" << endl;

    cout << vec1.getSize() << endl;
    cout << "should be: 2" << endl << endl;

    //testing erase function
    cout << endl << "**TESTING ERASE FUNCTION**" << endl;

    vec1.erase();
    if(vec1.getSize() == 0){
        cout << "vec1 erased" << endl;
    }

    //testing isEmpty function
    cout << endl << "**TESTING ISEMPTY FUNCTION**" << endl;

    cout << vec1.isEmpty() << endl;
    cout << "should be: 1 (true)" << endl;

    return 0;
}
