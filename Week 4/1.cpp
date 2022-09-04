/*1. Write a program in C++ to convert a decimal number into binary without using an
array and using the constructor and destructor.
*/

#include <iostream>
using namespace :: std;
class Decimal2Binary{
    public :
    // Constructor
    Decimal2Binary(int n){
        cout << "Enter the number  :";
        cin >>n;
        int i=1,j=n,bin=0,n1=n;
        for(j=n;j>0;j=j/2){
            bin += (n%2)*i;
            i*=10;
            n=n/2;
        }
        cout << "Binary Number of "<< n1 <<" is  " << bin<<endl; 
    }
    // Destructor
    ~Decimal2Binary(){
        cout << "Destructor terminated process" ;
    }
};
int main() {
    Decimal2Binary obj(4);
    return 0;
}

/* Output 
Enter the number  :8
Binary Number of 8 is  1000
Destructor terminated process
/*