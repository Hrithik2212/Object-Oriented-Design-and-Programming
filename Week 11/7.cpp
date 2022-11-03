/*7. Write a C++ program to demonstrate re throw exception within exception handler.*/

#include <iostream>
using namespace std;
 
int main()
{
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}