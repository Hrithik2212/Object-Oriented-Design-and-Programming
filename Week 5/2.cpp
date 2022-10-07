// 2. Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. Create a class&#39;AddAmount&#39; with a data member named&#39;amount&#39; with an initial value of $50. Now make two constructors of this class asfollows:
// 1 - without any parameter - no amount will be added to the Piggie Bank
// 2 - having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the &#39;AddAmount&#39; class and display the final amount in the Piggie Bank.


#include <iostream>
using namespace ::std ;
class PigieBank{
    public:
    int Amount ; 
    PigieBank(int a){
        Amount =50 + a;
    }
    PigieBank(){
        Amount =50 ;
    }
    void disp(){
        cout << "Your Balance is  " << Amount<<"$" << endl ;
        
    }
};
int main() {
    PigieBank p1 ,p2(100);
    p1.disp();p2.disp();
    return 0;
}

