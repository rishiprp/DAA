#include <iostream>
using namespace std;
int main() {
    int a[7]={19,5,2,8,6,-1,2};
    int max=a[0];
    int min=a[0];
    for(int i=0;i<7;i++){
        if(a[i]<=min){
        min=a[i];
        }
        if(a[i]>=max){
            max=a[i];
        }
    }
    cout<<"Minimum value is :"<<min<<endl;
    cout<<"Maximum value is :"<<max<<endl;
    return 0;
}
