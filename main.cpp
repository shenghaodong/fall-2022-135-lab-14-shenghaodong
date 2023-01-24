#include <iostream>
#include "funcs.h"

int main(){

    //Make Vector class
    MyVector<int> testing;

    //Fill up the class by push_back
    for(int i = 0; i < 20; i++){
        testing.push_back(i);   
    }
    std::cout << testing.empty() << std::endl;
    testing.clear();
    std::cout << testing.empty() << std::endl;
    std::cout << testing[19] << std::endl;
    return 0;
}