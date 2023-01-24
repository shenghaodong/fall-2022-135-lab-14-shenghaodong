#include <iostream>
#include "funcs.h"

int main(){
    MyVector<int> testing;
    for(int i = 0; i < 20; i++){
        testing.push_back(i);   
    }
    std::cout << testing.empty() << std::endl;
    testing.clear();
    std::cout << testing.empty() << std::endl;
    std::cout << testing[19] << std::endl;
    return 0;
}