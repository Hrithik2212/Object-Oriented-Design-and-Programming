#include <iostream>
using namespace std;
  

template <class T>
void display(T t1)
{
    cout << "Displaying Template: "
         << t1 << "\n";
}
void display(int t1)
{
    cout << "Explicitly display: "
         << t1 << "\n";
}

int main()
{
    display(200);
    display(12.40);
    display('G');
    return 0;
}