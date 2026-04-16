#include <iostream>
using namespace std;

// =======================
// 1. BASE CLASS (ABSTRACTION + ENCAPSULATION)
// =======================
class Person {
private:
    string name;   // Encapsulation (data hiding)
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter (controlled access)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Setter
    void setAge(int a) {
        age = a;
    }

    // Virtual function (Runtime Polymorphism)
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person Destructor Called\n";
    }
};

// =======================
// 2. DERIVED CLASS (INHERITANCE)
// =======================
class Student : public Person {
private:
    int marks;

public:
    // Constructor using base class constructor
    Student(string n, int a, int m) : Person(n, a) {
        marks = m;
    }

    // Function overriding (Runtime Polymorphism)
    void display() override {
        cout << "Student: " << getName()
             << ", Age: " << getAge()
             << ", Marks: " << marks << endl;
    }
};

// =======================
// 3. ANOTHER DERIVED CLASS
// =======================
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string sub) : Person(n, a) {
        subject = sub;
    }

    void display() override {
        cout << "Teacher: " << getName()
             << ", Subject: " << subject << endl;
    }
};

// =======================
// 4. OPERATOR OVERLOADING
// =======================
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// =======================
// 5. FRIEND FUNCTION
// =======================
class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    // Friend function declaration
    friend void showLength(Box b);
};

// Friend function definition
void showLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

// =======================
// 6. FUNCTION OVERLOADING (Compile-time Polymorphism)
// =======================
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// =======================
// MAIN FUNCTION
// =======================
int main() {

    // Object creation
    Person p("Alice", 30);
    p.display();

    cout << "------------------\n";

    // Inheritance + Polymorphism
    Person* ptr;
    Student s("Bob", 20, 85);
    Teacher t("Dr. Smith", 45, "Math");

    ptr = &s;
    ptr->display();   // Calls Student version

    ptr = &t;
    ptr->display();   // Calls Teacher version

    cout << "------------------\n";

    // Operator Overloading
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    cout << "Complex Addition: ";
    c3.show();

    cout << "------------------\n";

    // Friend Function
    Box b(10);
    showLength(b);

    cout << "------------------\n";

    // Function Overloading
    cout << "Sum (int): " << add(5, 3) << endl;
    cout << "Sum (double): " << add(2.5, 3.7) << endl;

    return 0;
}