#include <iostream> 
#include <string>
/*Create a class named &#39;Student&#39; with a string variable &#39;name&#39; and an integer variable
&#39;roll_no&#39;. Assign the value of roll_no as &#39;2&#39; and that of name as &quot;John&quot; by creating an
object of the class Student.*/
using namespace :: std ;
class Student{
    private:
    string name;
    int roll_no;
    public:
    void set(string s,int n){
        name = s;roll_no =n;
    }
    void display(){
        cout << "NAME : " << name <<endl ;
        cout << "Roll NO : "<< roll_no << endl ;
    }
};

int main(){
    Student s1;
    s1.set("John",2);
    s1.display();
    return 0;
}
