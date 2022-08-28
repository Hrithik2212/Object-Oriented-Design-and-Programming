/*
7. Add two distances in inch-feet by creating a class named &#39;AddDistance&#39;.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class addDistance{
    public:
    void set(int a,int b){
        cout << "The sum of the distance is "<<a+b<<" inches"<<endl;
    }
}d1;

int main(){
    d1.set(5,10);
    return 0;
}
