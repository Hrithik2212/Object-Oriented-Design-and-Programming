
// 10. Write a C++ Program display Student Marksheet using Multiple inheritance

// Code 
#include <iostream>
#include<string.h>
using namespace std;
class Sub
{   public:
    int sci,sst,eng;
    Sub(){
        cout<<"Enter science marks"<<endl;
        cin>>sci;
        cout<<"Enter sst marks"<<endl;cin>>sst;
        cout<<"Enter eng marks"<<endl;cin>>eng;
    }
};
class Data
{
    public:
    string name;
    int roll_no;
    Data(){
        cout<<"Enter name and roll no."<<endl;
        cin>>name;
        cin>>roll_no;
    }
};
class Student : public Sub,public Data
{   public:
    Student(){
        cout<<name<<endl<<roll_no<<endl<<"Science "<<sci<<endl<<"SST "<<sst<<endl<<"English "<<eng<<endl;
    }
};
int main()
{
    Student s1;
   
    return 0;
}


// Output 
// Enter science marks
// 88
// Enter sst marks
// 90
// Enter eng marks
// 99
// Enter name and roll no.
// soham
// 209
// soham
// 209
// Science 88
// SST 90
// English 99
