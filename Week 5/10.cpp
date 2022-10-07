/*10.Write a C++ Program with three different function with same name to find the sum of digits using function overloading.
 */


#include <iostream>
using namespace std;


int sum(int a, int b);
float sum(float a, float);	// overloaded function


int main()
{
	int intA = 0;
	int intB = 0;
	cout << "Enter first int number: ";
	cin >> intA;
	cout << "Enter second int number: ";
	cin >> intB;
	cout << "result of sum() is: " << sum(intA, intB) << endl << endl;
	float floatA = 0;
	float floatB = 0;
	cout << "Enter first float number: ";
	cin >> floatA;
	cout << "Enter second float number: ";
	cin >> floatB;
	cout << "result of sum() is: " << sum(floatA, floatB) << endl << endl;
	return 0;
}


int sum(int a, int b)
{
	return a + b;
}


float sum(float a, float b)
{
	return a + b;
}