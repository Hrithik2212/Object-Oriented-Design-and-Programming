#include <iostream>
using namespace::std;

/*Write a C++ program to check if a number is +ve , -ve , zeor with nested if statements*/

int main(){
    int n;
    cout << "enter the number : ";
    cin >> n ;
    if (n>=0){
        if (n==0){
            cout<<"The given number is zero"<<endl;
        }
        else {
            cout<<"The given number is Positive"<<endl;
        }
    }
    else {
        cout <<"The given nmber is Negative" <<endl ;
    }
    return 0;
}

/*OUTPUT

enter the number : 0
The given number is zero

*/