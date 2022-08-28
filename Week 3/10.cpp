/*10 .  Print the average of three numbers entered by the user by creating a class named &#39;Average&#39;
having a function to calculate and print the average without creating any object of the
Average class.
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace::std;
class num3{
    public :
    int set(int a,int b,int c){
        int av =(a+b+c)/3;
        cout<<"average is "<<av<<endl;
    }
}a;
int main(){
    a.set(3,4,5);
    return 0;
}
