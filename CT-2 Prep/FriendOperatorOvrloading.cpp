#include <iostream>
using namespace :: std ;

class complex{
  public:
    int r ,i ;
    complex(int r=0,int i = 0){
        this->r = r ;
        this->i = i;
    }
    void disp(){
        cout << r <<" + ("<< i <<")j" << endl ;   
    }
    friend complex operator+(const complex a , const complex b);
};

complex operator+(const complex a , const complex b){
    complex c;
    c.i = a.i + b.i ;
    c.r = a.r + b.r ;
    c.disp();
    return c;
}


int main(){
    complex a(5,5),b(2,2) ;
    a+b;
    return 0;
}