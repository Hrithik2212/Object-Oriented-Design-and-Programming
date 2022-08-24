#include <iostream>
using namespace :: std ;
/*WAP to find the factorial of given number with recursive function*/
int factorial(int n){
    if(n==0){return 1;}
    else {
        return factorial(n-1)*n;
    }
}

int main(){
    cout << "Factorial of 5 is "<<factorial(5)<<endl;
    return 0;
}