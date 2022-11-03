/*2. Write a C++ program to catch default exception for any given condition.*/


#include <iostream>
using namespace std;
 
int main()
{
    try  {
       throw 10;
    }
    catch (char *excp)  {
        cout << "Caught " << excp;
    }
    catch (...)  {
        cout << "Default Exception\n";
    }
    return 0;
}

