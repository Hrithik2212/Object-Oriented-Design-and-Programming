/*Write a C++ program to demonstrate std::bad_alloc and std::bad_cast exceptions.*/

#include <iostream>
using namespace :: std ;

int main(){
    try{
        if(1==1)
            throw(bad_alloc());
    }
    catch(bad_alloc &b){
        cout << b.what() << endl ;
    }
    try{
        if(2==2)
            throw(bad_cast());
    }
    catch(bad_cast &bd){
        cout << bd.what() << endl ;
    }

}
