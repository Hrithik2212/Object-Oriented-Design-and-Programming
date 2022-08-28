/*4. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
units by creating a class named &#39;Triangle&#39; with a function to print the area and perimeter.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class triangle{
    private:
        int  a,b,c,s ,ar; 
    public :
         void set(int x , int y ,int z){
             a = x; b =y ; c=z;
             s = x+y+z;
             ar = sqrt(s*(s-a)*(s-b)*(s-c));
         }
         void display(){
             cout << "Perimeter : "<<s<<endl; 
             cout << "Area : " << ar << endl;
         }
}t1;
int main(){
    t1.set(3,4,5);
    t1.display();
    return 0;
}