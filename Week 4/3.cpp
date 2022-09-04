/*
3. Write C++ Program to display the cube of the number upto a given integer using
Destructor.
*/
#include <iostream>
using namespace :: std; 
class cube2num{
    public:
    void disp();
    cube2num(){
        int n;
        cout << "Enter the number :";
        cin>>n;
        cube2num::disp(n);
    }
    void disp(int n){
        for(int i=1;i<=n;i++){
            cout<<"Cube of "<<i<<" is "<< i*i*i<<endl;
        }
    }
};

int main(){
    cube2num obj;
}
/*
OUTPUT
Enter the number :5
Cube of 1 is 1
Cube of 2 is 8
Cube of 3 is 27
Cube of 4 is 64
Cube of 5 is 125
*/