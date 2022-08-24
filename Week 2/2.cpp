#include <iostream>
using namespace :: std;

/*WAP to check if common element present is in 3 arrays*/
bool check(int l , int* i ,int len){
    for(int j=0;j<len;j++){
        if (l==*(i+j)){
            return true;
        }
    }
    return false;
}

int main(){
    int a1[] = {1,2,3,4,5};
    int a2[] = {5,6,7,8,9};
    int a3[] = {5,2,11,12,13};
    for (int i=0;i<5;i++){
        if(check(*(a1+i),a2,5) && check(*(a1+i),a3,5)){
            cout << "Common Elemnet is Present" << endl;
            break;
        }
        else if(i==4){
            cout << "No Common element is present";
        }
    }

}