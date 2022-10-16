#include <iostream>
using namespace :: std;

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
    const complex operator+(const complex &obj1){
        complex res;
        res.i = obj1.i + this->i;
        res.r = obj1.r + this->r;
        res.disp();
        return res;
    }
};

int main(){
    complex a(5,5),b(2,2) ;
    a+b;
    return 0;
}