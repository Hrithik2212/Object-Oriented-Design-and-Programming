#include <iostream>
using namespace :: std ;
/*WAP to swap two numbers by reference*/
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp ;
}

int main(){
    int a=3,b=4;
    swap(&a,&b);
    cout << "a="<<a<<" | b="<<b<<endl;
}