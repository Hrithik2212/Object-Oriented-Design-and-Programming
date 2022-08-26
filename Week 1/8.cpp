#include <iostream>
using namespace :: std ; 
/*WAP to implement fibonnaci series*/

int main(){
    int n ,n1=1 ,n2=1;
    cout <<"Enter a number : ";
    cin >> n ;
    cout << n1 <<" ";
    for(int i=0;i<n;i++){
        int temp = n2 ;
        n2 +=n1 ;
        n1 =temp ;
        cout << n2 << " ";
    }
    return 0;
}

/*OUTPUT
Enter a number : 5
1 2 3 5 8 13 
*/