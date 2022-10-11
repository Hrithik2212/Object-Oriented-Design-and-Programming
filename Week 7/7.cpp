// 7. Write a C++ Program to find area and volume using mulitple inheritance.


#include <iostream>
#include<string.h>
using namespace std;
class base
{   public:
   int l,b,h;
   int area,vol;
   public:
   void get()
   {
       cout<<"Enter the length, breadth, height to find area and volume : ";
       cin>>l>>b>>h;
       area=l*b;
       vol=area*h;
  
   }
};
class derived1 : public base
{   public:
   void disparea(){
       cout<<"Area = : "<<area<<endl;
     
   }
};
class derived2 : public derived1
{   public:
   void dispvolume(){
       cout<<"Volume = : "<<vol<<endl;
     
   }
};
int main()
{
  
   derived2 obj;
   obj.get();
   obj.disparea();
   obj.dispvolume();
   return 0;
}

// OUTPUT

// Enter the length, breadth, height to find area and volume : 5 6 7
// Area = : 30
// Volume = : 210
