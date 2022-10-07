// 3. Create a class to print the area of a square and a rectangle. The class has two functions with the same 
// name but different number of parameters.The function for printing the area of rectangle has two parameters 
// which are its length and breadthrespectively 
// while the other function for printing the area of square has one parameter which is the side of the square

#include <iostream>
using namespace ::std ;
class Qaud{
    public:
    void print(int l , int b){
        cout << "Area of the rectangle  is " << l*b<<endl;
    }
    void print(int s){
        cout << "Area bof the sqaure is " << s*s << endl ;
    }
}q1,q2;
int main() {
    q1.print(5,7);q2.print(3);
    return 0;
}
