/*1. Write a C++ program to demonstrate throw an exception for division by zero condition.*/

#include <iostream>
using namespace std;
  
float Division(float num, float den){
    if (den == 0) {
        throw runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return (num / den);
}

int main()
{
    float numerator = 12.5;
    float denominator = 0;
    float result;
    try {
    result = Division(numerator, denominator);
    cout << "The quotient of 12.5/0 is "<< result << endl;
  
    }
    catch(runtime_error &e){
        cout << "Exception occured " << endl << e.what() ;
    }
    
}