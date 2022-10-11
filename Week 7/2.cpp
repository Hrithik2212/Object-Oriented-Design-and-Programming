// 2. Write a C++ program to read and print employee information using multiple inheritance.

// Code 

#include <iostream>
#include <string>
using namespace :: std;
class Reader{
    public:
        string name; 
        void get_name(){
            cout << "Enter the Name : " ; 
            cin >> name ; 
        }
};
class Printer{
    public:
        void print_name(string n){
        cout << "Name of the person is " << n << endl ; 
        }
};

class Employee : public  Reader , public Printer {
    
    };

int main(){
    Employee a;
    a.get_name();
    a.print_name(a.name);
    return 0;
}

// OUTPUT

// Enter youre name :Hrithik
// Name of the person is Hrithik
