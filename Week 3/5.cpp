/*5. Develop a program of class Room with attributes length, breadth and height and its object
room1 and room2 to calculate the area and volume of a room using function.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class classroom{
    public : 
        int l,w,h,a,v;
        void set(int le,int br,int he){
            l =le;w=br;h=he;
            v =l*w*h;a=l*w;
            cout <<"Volume : "<<v<< endl;
            cout <<"Area : "<<a<<endl;
        }
}room1,room2;

int main(){
    room1.set(5,5,5);
    room2.set(10,10,8);
}
