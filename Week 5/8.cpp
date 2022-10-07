// 8. Write a C++ program to find Volume of Cube, Cylinder, Sphere using Function Overloading.

 #include<iostream>
 using namespace std;
 class Shape{
 public : float volume;

 void Volume(int x)
 {
     volume =(4*3.14*x*x*x)/3;
     cout<<"Volume of the Sphere is "<<volume<<endl;
 }
 
 void Volume (int x, int y)
  {
      volume=3.14*x*x*y;
    cout<<"Volume of the Cylinder is "<<volume<<endl;
 }

  void Volume (double x)
 {
     volume = x*x*x;
     cout<<"Volume of the Cube is "<<volume<<endl;
 }
 };

 int main()
 {
   Shape S;
   S.Volume(12.0);
   S.Volume(3,3);
   S.Volume(3);
   return 0;
 }

