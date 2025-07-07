
#include <iostream>

int main() {
    int num;
    std::cout<<"Enter Number :";
    std::cin>>num;
    int total=0;
    for(int i=1;i<100;i++){
        if(num%i==0){
            total++;
        }
    }
        if(total<=2){
        std::cout<<num<<" is Prime"<<std::endl;
    
    }
        else{
        std::cout<<num<<" is NOT Prime"<<std::endl;
    }

    return 0;
}
