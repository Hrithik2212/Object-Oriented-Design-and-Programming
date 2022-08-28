/*8. . C++ Program to find Factorial by defining Function outside of the class.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class fact{
    public:
int factorial(int n);
void display(int n){
    cout <<"Factorial of "<<n<<" is "<< factorial(n)<<endl;
}
};

void fact :: int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
} 
int main(){
    fact n;
    n.display(5);
    return 0;
}
