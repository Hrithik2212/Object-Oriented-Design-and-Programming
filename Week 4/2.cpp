/*
2. Write a program in C++ to print Floyd’s Triangle by using the constructor destructor
*/

#include <iostream>
using namespace :: std; 
class floydstriangle{
    public :
     floydstriangle(int n){
         int i,j;
         for(i=0;i<=n;i++){
             for(j=0;j<=i;j++){
                 cout <<"* ";
             }
             cout <<endl;
         }
     }
     ~floydstriangle(){
        cout << "Destructor terminated process" ;
    }

};
int main(){
    floydstriangle(5);
    return 0;
}
/*
OUTPUT
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
*/
