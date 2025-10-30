#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float mark;

public:
    
    Student(int i, string n, float m) {
        id = i;
        name = n;
        mark = m;
    }

        void displayInfo() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
    }
};

int main() {
    
    Student s1(101, "Ali", 88.5);
    s1.displayInfo();
    return 0;
}