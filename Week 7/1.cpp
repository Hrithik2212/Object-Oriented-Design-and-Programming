// 1. Write a C++ program to read and print students information using two classes and simple
// inheritance.
// Code 
#include <iostream>
#include<string.h>
using namespace std;
class Student
{   public:
    string name;
    int roll_no;
    public:
    void get()
    {
        cin>>name;
        cin>>roll_no;
    }
};
class Book : public Student
{   public:
    void disp(){
        cout<<name<<endl<<roll_no<<endl;
    }
};
int main()
{
    Book obj2;
    obj2.get();
    obj2.disp();
    return 0;
}

// OUTPUT

// Hrithik 
// 210
// Hrithik 
// 210
