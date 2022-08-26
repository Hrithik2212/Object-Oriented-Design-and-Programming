#include <iostream>
using namespace::std ;

/*WAP to find the sum of positive number and break the loop if negative number is entered*/
int main(){
    int n,sum = 0;  
    cout<< "Enter the number  : ";
    cin >> n;
    while(n!=0){
        if (n<0){
            cout << "Negative number entered " << endl;
            break;
        }
        sum += n ;
        n--;
    }
    if (sum >= 0){
        cout << "The sum upto given numbers is " << sum << endl; 
    }
    return 0;
}

/*OUTPUT

Enter the number  : 12
The sum upto given numbers is 78

Enter the number  : -5
Negative number entered 
The sum upto given numbers is 0
*/