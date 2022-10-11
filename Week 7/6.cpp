
// 6. We want to calculate the total marks of each student of a class in Physics,Chemistry and
// Mathematics and the average marks of the class. The number of students in the class are
// entered by the user. Create a class named Marks with data members for roll number, name
// and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry
// and Mathematics, which are used to define marks in individual subject of each student. Roll
// number of each student will be generated automatically.


// Code 

#include <iostream>
#include <string>
using namespace :: std;
class Mathmarks{
    public :
    int mathmarks ;
};
class Chemmarks{
    public :
    int chemmarks ;
};
class Physmarks{
    public :
    int physmarks ;
};
class Student: public Mathmarks , public Chemmarks , public Physmarks{
    public:
    string name ;
    int roll , marks ;
    Student(){
        cout << "Enter Name ";
        cin >> name ;
        cout << "\nEnter Physics marks :" ;
        cin >> physmarks ;
        cout << "\nEnter Chemistry marks :";
        cin >> chemmarks;
        cout << "\nEnter Maths marks :";
        cin >> mathmarks;
    }
    void avg(){
        cout << "Average Marks :"<<(physmarks + chemmarks + mathmarks) / 3 << endl;
    }
};

int main(){
    Student a;
    a.avg();
    return 0 ;
}


// Output
// Enter Name Hrithik
// Enter Physics marks :12
// Enter Chemistry marks :12
// Enter Maths marks :23
// Average Marks :15
 
