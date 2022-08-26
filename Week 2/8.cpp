#include <iostream> 
using namespace std; 
/*Check odd or even using goto*/
void checkEvenOrNot(int num) 
{ 
    if (num % 2 == 0) 
        goto even; 
    else
        goto odd; 
  
even: 
    cout << num << " is evenn"; 
    return; 
odd: 
    cout << num << " is oddn"; 
} 
  

int main() 
{ 
    int num = 26; 
    checkEvenOrNot(num); 
    return 0; 
} 