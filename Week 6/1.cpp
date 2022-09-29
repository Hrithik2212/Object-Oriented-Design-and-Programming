#include<iostream>
#include<cstring>
#include<string.h>
using namespace::std ;

class CompareString {
public:
    char str[25];
     CompareString(char str1[]){
        strcpy(this->str, str1);
    }
    bool operator==(CompareString s2)
    {
        if (strcmp(str, s2.str) == 0)
            return true;
        else
            return false;
    }
};


int main(){
    char a[] = "Hrithik" , b[] = "Saketh";
    CompareString s1(a) , s2(b);
    if (s1 == s2 ){
        cout <<  "Yes , string are the same" << endl;
    }
    else {
        cout <<"No ,the string are not same " << endl ;
    }
    return 0;
}
