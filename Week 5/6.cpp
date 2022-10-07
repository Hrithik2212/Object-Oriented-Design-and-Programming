// 6. Write a C++ program to Swap variables using Function Overloading.


#include<iostream>
using namespace std;
class Swap{
    public :
    int temp ; 
    void swap (int* a , int * b){
        temp = *a ;
        *a = *b ; 
        *b = temp;
    }
    void swap(int *a , int *b ,int *c){
        temp = *a ; 
        * c = * b ;
        * a = *b; 
        * b = temp ;
    }
};
int main(){
   int a =1  , b=2 , c=3 ;
   Swap s1 , s2 ; 
   s1.swap(&a,&b);
   cout << "a = "<<a<<", b = "<<b<<", c = " <<c<<endl; 
   s2.swap(&a,&b,&c);
      cout << "a = "<<a<<", b = "<<b<<" c =" <<c<<endl; 
    return 0;
}

