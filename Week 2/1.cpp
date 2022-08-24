#include <iostream>
using namespace ::std ;


/*WAP to find the max element in an array*/

int main(){
    int array[]  ={1,2,3,4,5,6};
    int max = 0 ;
    for(int i=0;i<6;i++){
        if (max < *(array+i)){
            max = *(array+i);
        }
    }
    cout << "Max = "<< max ;
    return 0;
}
