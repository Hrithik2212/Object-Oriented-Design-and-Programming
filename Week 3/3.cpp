/*. Define a class named Circle which can be constructed by a radius. The Circle class has two
methods for computing perimeter and area, respectively.
*/

#include <iostream>
#include <string>
using namespace::std;
class Circle{
    private :
     int r ;float v, a ; 
    public:
     void set(int rad){
         r =rad;
     }
     void area(){
         a = 3.14*r*r;
     }
     void volume(){
         v = 3.14*(4/3)*r*r*r;
     }
     void display(){
         cout << "Volume : " << v <<endl ; 
         cout << "Area : " << a <<endl ;
     }
}c1;

int main(){
    c1.set(5);
    c1.area();c1.volume();
    c1.display();
    return 0;
}

