/*
4. Write a C++ Program to calculate Volume of Cube using constructor and destructor.
*/

#include <iostream>
using namespace :: std; 
class vol{
    public:
    void cube(int n){
        cout << "Volume of the given cube is "<<n*n*n<<endl;
    }
    vol(){
        int n;
        cout<<"Enter the side of the cube :";
        cin>>n;
        vol::cube(n);
    }
    ~vol(){};
};
int main(){
    vol c1;
}
/*
OUTPUT
Enter the side of the cube :5
Volume of the given cube is 125
*/