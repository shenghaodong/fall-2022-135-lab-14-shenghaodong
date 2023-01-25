#include <iostream>
#include "funcs.h"

int main(){

    //Make Vector class
    MyVector<int> testing;

    std::cout << "Should be false because the array is empty: " << testing.empty() << std::endl;
    //Fill up the class by push_back
    for(int i = 0; i < 20; i++){
        testing.push_back(i);   
    }
    std::cout << "Added stuff to Array so it should return false now: " << testing.empty() << std::endl;
    std::cout << "Should print 19: " << testing[19] << std::endl;
    std::cout << "Should print 40 since the array just reached max size 20 and the array size should be doubled: " << testing.capacity() << std::endl;
    return 0;
}