/* 5. Write a function template in C++ to find duplicate elements in an array.*/

#include <iostream>
using namespace std;
 
template <typename T>void findDuplicates(T arr[], int len)
{
     
    bool ifPresent = false;
     T al[100];
 
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                auto it = std::find(al.begin(),
                                    al.end(), arr[i]);
                                     
                if (it != al.end())
                {
                    break;
                }

                else
                {
                    al.push_back(arr[i]);
                    ifPresent = true;
                }
            }
        }
    }
    if (ifPresent == true)
    {
        cout << "[" << al[0] << ", ";
        for(int i = 1; i < al.size() - 1; i++)
        {
            cout << al[i] << ", ";
        }
         
        cout << al[al.size() - 1] << "]";
    }
    else
    {
        cout << "No duplicates present in arrays";
    }
}
 

int main()
{
    int arr[] = { 12, 11, 40, 12,
                  5, 6, 5, 12, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findDuplicates<int>(arr, n);
 
    return 0;
}