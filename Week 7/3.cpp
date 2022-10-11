// 3. Write a C++ program to demonstrate example of hierarchical inheritance to get square and
// cube of a number.

// Code 
#include <iostream>
#include <string>
using namespace std;
class base
{
    public : int num,sq,cube;
    void getdata(int num){
        this->num;
        sq=num*num;
        cube=num*num*num;
    }
};
class derived1 : public base
{ public:
    void dispdata(){
        cout<<"The square of the number is : "<<sq<<endl;
    }
};
class derived2 : public base
{ public:
    void dispdata(){
        cout<<"The cube of the number is : "<<cube;
    }
};
int main() {
    derived1 obj1;
    derived2 obj2;
    obj1.getdata(5);
    obj1.dispdata();
    obj2.getdata(5);
    obj2.dispdata();
    return 0;
}

// OUTPUT

// The square of the number is : 25
// The cube of the number is : 125
