// 1. Write a program to print the names of students by creating a Student class. If no 
// name is passed while creating an object of the Student class, then the name should be
// &quot;Unknown&quot;, otherwise the name should be equal to the String value passed 
// while creating the object of the Student class.

 

#include <iostream>
#include <string>
using namespace:: std ;
class Student{
    public :
    string name;
    Student(){
        name = "Unknown";
    }
    Student(string n){
        name = n;
    }
    void dispname(){
        cout<<"Name of the student is  "<<name<<endl;
    }
};
int main() {
    Student s1,s2("Hrithik");
    s1.dispname();
    s2.dispname();
    return 0;
}

/*OUTPUT
Name of the student is  Unknown
Name of the student is  */

