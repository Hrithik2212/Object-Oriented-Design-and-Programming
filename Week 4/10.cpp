#include <iostream>
#include <algorithm>
using namespace std;
int a[4];
class fastfood{
    public:
    fastfood(){
    int T;
    cin>>T;
    while(T--){
        cin>>a[1]>>a[2]>>a[3];
        int res=0;
        for(int i=1;i<=3;++i){
            if(a[i]>0) res++,--a[i];
        }
        sort(a+1,a+4);
        if(a[3]>0&&a[2]>0){
            res++;a[3]--;a[2]--;
        }
        if(a[3]>0&&a[1]>0){
            res++;a[3]--;a[1]--;
        }
        if(a[2]>0&&a[1]>0){
            res++;a[2]--;a[1]--;
        }
        if(a[1]>0&&a[2]>0&&a[3]>0){
            res++;
        }   
        cout<<res<<'\n';
    }
    }
};
int main(){
    fastfood f1;
    return 0;
}

/*OUTPUT
2
2 2 8
5
3 2 2
5
*/