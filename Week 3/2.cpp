/*2. Write a C++ program to illustrate the concept of class and object creation. (Ask
students to create a class, methods and invoke them inside main method).*/

#include <iostream> 
#include <string>
using namespace :: std ;
class Student{
    private:
    string name;
    int roll_no;
    public:
    void set(string s,int n){
        name = s;roll_no =n;
    }
    void display();
};
void Student:: display(void){
        cout << "NAME : " << name <<endl ;
        cout << "Roll NO : "<< roll_no << endl ;
    }

int main(){
    
    Student s1;
    s1.set("John",2);
    s1.display();
    return 0;
}
