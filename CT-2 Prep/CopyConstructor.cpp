#include <iostream>

using namespace :: std ;

class CopyConstructor{
    public:
        int a ,b ;
        CopyConstructor(int a ,int b){
            this->a = a;
            this->b = b;
        }
        CopyConstructor(const CopyConstructor &obj){
            this->a = obj.a;
            this->b = obj.b;
        }
        void display(){
            cout << "a = "<<this->a<<endl;
            cout << "b = "<<this->b<<endl;
        }
};

int main(){
    CopyConstructor obj1(5,10);
    obj1.display();
    CopyConstructor obj2 = obj1;
    obj2.display();
    CopyConstructor obj3(obj1);
    obj3.display();
}