#include <iostream>
#include "funcs.h"

int main(){
    MyVector<int> testing;
    testing.push_back(3);
    std::cout << testing[0] << std::endl;
    std::cout << testing.empty() << std::endl;
    testing.clear();
    std::cout << testing.empty() << std::endl;
    return 0;
}