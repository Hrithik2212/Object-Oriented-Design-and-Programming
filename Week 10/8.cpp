/*8. Write a Function Template in C++ to find the maximum number among the 3 given
numbers.*/

#include <iostream>
using namespace :: std ; 

template <typename T>T max(T n1 ,T n2,T n3){
    return (n1 > n2) ? 
          (n1 > n3 ? n1 : n3) :
          (n2 > n3 ? n2 : n3);
}

int main(){
    cout << max<int>(3,4,5);
}