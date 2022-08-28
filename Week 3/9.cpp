/*
9.Perform addition operation on complex data using class and object. The program should
ask for real and imaginary part of two complex numbers, and display the real and imaginary
parts of their sum.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class complex{
    public:
    int r,c;
    void set(int real,int complex){
        r =real;c=complex;
    }
    void display(){
        cout << "Real : "<<r<<endl;
        cout <<"Imaginary : "<<c<< endl;
        cout << r << "+ "<<c<<"j"<<endl;
    }
};
int main(){
    complex a;
    a.set(2,3);
    a.display();
    return 0;
}
