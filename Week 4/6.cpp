/*6. Write a C++ program to find the number and sum of all integer between 100 and 200
which are divisible by 9 with constructor destructor.
*/
#include <iostream>
using namespace :: std; 
class c{
    public:
    c(){
        int sum =0,n ;
        cout << "The numkbers divisible by 9 between 100 and 200 are "<<endl;
        for(int i=100;i<200;i++){
            if (i%9==0){
                sum+=i;
                n=i;
                cout <<i<<" "; 
            }
        }
        cout << "\nThe sum of the numbers are "<<sum<<endl;
    }
    ~c(){}
};
int main(){
    c c1;
}
/*
OUTPUT
The numkbers divisible by 9 between 100 and 200 are 
108 117 126 135 144 153 162 171 180 189 198 
The sum of the numbers are 1683
*/