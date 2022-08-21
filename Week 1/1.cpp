#include <iostream>
/* 1.	Write a C++ program to print whether the given number is positive number or negative number.*/
using namespace::std;

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n>0){
        cout << "The given number is positive" << endl ;
    }
    else {
        cout << "The given number is negative" << endl;
    }
    return 0;
}