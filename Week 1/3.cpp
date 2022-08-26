#include <iostream>
using namespace::std;

/*Write a program to check if the given number is Leap Year using if-else*/
int main(){
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if (year%4==0){
        cout << "The given year is  leap year " << endl;
    }
    else {
        cout << "the given year is not leap year"<<endl;
    }
}

/*OUTPUT
Enter the year : 2022
the given year is not leap year

Enter the year : 2020
The given year is  leap year 
*/