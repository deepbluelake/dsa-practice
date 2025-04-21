#include <iostream>
using namespace std;
#include "Student.cpp"

int main(){
    cout << "OOP CONCEPTS!" << endl;
    
    Student s1;
    Student *s2 = new Student;
    cout << "Constructor Demo!" << endl;
    Student s4(10, 19802);
    s4.display();

    Student *s5 = new Student(18, 23038);
    s5 -> display();

    return 0;
}