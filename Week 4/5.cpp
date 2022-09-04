
/*5. Write a program in C++ to make such a pattern like a pyramid with a number which
will repeat the number in the same row using constructor overloading and destructor.
*/
Code 
#include <iostream>
using namespace :: std; 
class pyramid{
    public:
    pyramid(){
    int rows;
    cout <<"Enter the number :";
    cin>>rows;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0){
        for(int space = 1; space <= rows-i; ++space){
            cout <<"  ";
        }
        while(k != 2*i-1){
            cout <<i<<" " ;
            ++k;
            }
        cout << endl;
        }    
    }
    ~pyramid(){}
};

int main(){
    pyramid p1;
}
/*
OUTPUT
Enter the number :5
         1 
      2 2 2 
    3 3 3 3 3 
  4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 
*/