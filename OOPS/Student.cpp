#include <iostream>
using namespace std;

class Student {
    public:
    int rollNumber;

    private:
    int age;

    public:

    //Constructor
    Student () {
        cout << "Constructor was called!" << endl;
    }

    Student (int a, int r) {
        cout << "Constructor 2 was called!" << endl;
        age = a;
        rollNumber = r;
    }

    display(){
        cout << "Age: " << age << endl << "RollNumber: " << rollNumber << endl;
    }

};