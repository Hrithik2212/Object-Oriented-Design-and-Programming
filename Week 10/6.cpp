/* 6. Write a program to illustrate how to define and declare a class template for reading two
data items from the keyboard and to find their sum. */

#include <iostream>
#include <string>
using namespace :: std ;

template <class T>class math{
    public:
T add(T a,T b){
        cout << a+b << endl ;
        return a+b;
    }
};

int main() {
    math<int> m1; 
    m1.add(1,2);
    math<string> m3;
    m3.add("Saketh", " Devabattini");
    return 0;
}


