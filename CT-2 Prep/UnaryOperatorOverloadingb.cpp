#include <iostream>
using namespace :: std; 

class Distance{
    public:
        int feet , inches ; 
        Distance(int f,int i){
            feet = f; inches = i ;
        }
        void operator--(){ 
            --feet;
            --inches ; 
            cout <<   feet << " Feet " << inches <<" Inches " << endl ; 
        }
};

int main(){
    Distance d1(10,5);
    --d1;
    return 0;
}