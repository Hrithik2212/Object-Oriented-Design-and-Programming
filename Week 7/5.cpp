
// 5. Make a class named Fruit with a data member to calculate the number of fruits in a basket.
// Create two other class named Apples and Mangoes to calculate the number of apples and
// mangoes in the basket. Print the number of fruits of each type and the total number of fruits
// in the basket.

// Code 
#include <iostream>
#include <string>
using namespace :: std;
class Fruits {
    public :
    int num ; 
    void count(){
        cout << "Enter the number of fruits in basket :";
        cin >> num;
        cout<< "The number of fruits in basket are " << num << endl ;
    }
};

class Apple : public Fruits {
    public : 
    Apple(){cout<<"Apple Basket" <<endl;}
};
class Mango : public Fruits{
    public:
    Mango(){cout <<"Mango Basket"<<endl;}
};

int main(){
    Apple a1 ;
    a1.count();
    Mango m1;
    m1.count();
}

// OUTPUT
// Apple Basket
// Enter the number of fruits in basket :25
// The number of fruits in basket are 25
// Mango Basket
// Enter the number of fruits in basket :30
// The number of fruits in basket are 30
