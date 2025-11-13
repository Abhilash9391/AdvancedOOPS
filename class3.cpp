#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor (must give values)
    Student(string n, int a) : name(n), age(a) {
        cout << "Parameterized constructor called\n";
    }

    // ❌ Delete the default constructor
    Student() = delete;
};

int main() {

    // ----------- VALID OBJECT CREATION -----------
    Student s1("Abhilash", 20);
    cout << "Name: " << s1.name << ", Age: " << s1.age << "\n\n";

    // ----------- INVALID OBJECT CREATION -----------
    //Student s2;   // ❌ ERROR: default constructor is deleted

    return 0;
}

//should compulsorly give valid arguments else u cannot create objects