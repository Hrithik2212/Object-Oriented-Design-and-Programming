#include <iostream>
using namespace :: std;
/*WAP to calculate factorial*/

int factorial(int n){
    if(n==0){return 1;}
    else {
        return factorial(n-1)*n;
    }
}

int main(){
    cout << "Factorial of 10 is "<<factorial(10)<<endl;
    return 0;
}

/* Output

Factorial of 5 is 120

Factorial of 10 is 3628800
 */

