// 4.Write a C++ program to read and print employee information with department and pf
// information using hierarchical inheritance.

// Code 
#include<iostream>
#include<string.h>
using namespace :: std;
class Employee
{   public:
    string name;
    public:
    Employee(){
        cin>>name;
    }
};
class Salary : public Employee
{
    int salary;
    public:
    Salary(){
        cin>>salary;
    }
    void disp(){
        cout<<name<<endl<<salary<<endl;
    }
   
};
class Dept : public Employee
{
    string department;
    public:
    Dept(){
        cin>>department;
    }
    void disp(){
        cout<<name<<endl<<department<<endl;
    }
       
};
int main(){
    Salary s1;
    s1.disp();
    Dept d1;
    d1.disp();
    return 0;
}

// OUTPUT

// Hrithik 
// 2100 
// Hrithik
// 2100
// Hrithik
// AI
// Hrithik
// AI 
