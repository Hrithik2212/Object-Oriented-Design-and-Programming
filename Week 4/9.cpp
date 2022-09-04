/*9. 
Code*/ 

#include <iostream>
using namespace std;
 
class Bill{
    public:
    Bill(){
        int a,d;
        cout <<"Enter 1 day bill :";
        cin >> a;
        cout << "Enter no of days :";
        cin >> d;
        cout << "Total Bill is "<<a*d<<endl;
    }
    ~Bill(){}
};
int main(){
    Bill b,b1;
}
/*
OUTPUT
Enter 1 day bill :5000
Enter no of days :7
Total Bill is 35000
Enter 1 day bill :15000
Enter no of days :7
Total Bill is 105000
*/