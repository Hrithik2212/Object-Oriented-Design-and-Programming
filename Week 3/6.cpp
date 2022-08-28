/*
6. Design a program of class Car with some attributes and its object to print its attributes.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class car{
    private:
         string c  ,com , type ;
    public :
        void set(string a,string b,string x){
            c =a;com=b;type=x;
            cout << "Color : "<< c<<endl;
            cout << "Company : "<<com<<endl;
            cout << "Type : "<<type<<endl;
        }
}c1;

int main(){
    c1.set("Grey","Toyato","Sedan");
    return 0;
}
