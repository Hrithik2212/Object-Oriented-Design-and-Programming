/*
7. Write a C++ Program to display the reverse of a number using the constructor.
*/
#include <iostream>
using namespace :: std; 
class rev_num{
    public :
    rev_num(){
    int number, reminder, reverse = 0;
	cout << "Please Enter the Number that you want to Reverse  =  ";
	cin >> number;
	while (number > 0)
	{
    	reminder = number % 10;
    	reverse = reverse * 10 + reminder;
    	number = number / 10;
	}
	cout << "\nReverse of given Number = " << reverse;
    }
};
int main(){
    rev_num n1;
}

/*
OUTPUT
Please Enter the Number that you want to Reverse  =  2456
Reverse of given Number = 6542
*/