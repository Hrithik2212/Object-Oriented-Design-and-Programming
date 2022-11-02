/*7. Write a program to demonstrate the use of special functions, constructor and destructor in
the class template. The program is used to find the biggest of two entered numbers.
*/

#include <iostream>
using namespace :: std ; 

template <class T>class Max{
    public:
    Max(T a,T b){
        if (a > b) {
            cout << a ;
        }
        else {
            cout << b;
        }
        cout << " is greater than the other" << endl ;
    }
    ~Max(){
        cout << "Thank you for using the class template " << endl ;
    }
};

int main(){
    Max<int> m(1,3);
}