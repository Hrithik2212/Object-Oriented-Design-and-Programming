#include <iostream>
using namespace::std ;
class number{
    public:
    int a ;
    int temp ;
    number(){}
    number(int a){
        this->a = a ;
    }
    void operator/(number &n){
        temp = this->a ;
        this->a = n.a ;
        n.a = temp ;
    }
};

int main(){
    number a(3),b(4);
    a / b ;
    cout <<"a = " << a.a << endl ;
    cout <<"b = " << b.a << endl ;
}