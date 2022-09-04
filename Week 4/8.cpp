//8. Write C++ program to demonstrate example of Parameterized Constructor
#include <iostream>
using namespace std;
 
class Demo
{
    private:
        int X;
        int Y;
    public:
    Demo (int a, int b); 
        void    Input(); 
        void    Display();
     
};
 
Demo:: Demo(int a, int b)
{
    X = a;
    Y = b;
}
 
void Demo:: Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}
 
 
//Definition of Display() member function.
void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    Demo d(10,20) ;
    cout << endl <<"Method 1: " << endl;  
    cout << "Value after initialization: " ;
    d.Display();    
 
    d.Input();
    cout << "Value after User Input : ";
    d.Display();
    Demo d1 = Demo(10,20);
    return 0;
}
/*
OUTPUT
Method 1: 
Value after initialization: 
X: 10
Y: 20
Enter Value of X: 23
Enter Value of Y: 42
Value after User Input : 
X: 23
Y: 42
*/