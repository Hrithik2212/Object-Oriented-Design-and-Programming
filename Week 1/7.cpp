#include <iostream>
using namespace :: std;
/*Check if the number is odd or even*/
int main(){
    cout << "Enter a number : ";
    int n; cin >> n;
    if(n%2==0){
        cout << "Even ";
        }
    else{
        cout << "Odd";
    }
    return 0;
} 

/*Output

Enter a number : 6
Even

Enter a number : 5
Odd
*/