//Make a array and if user's inputs exceed array size make a even bigger array and copy the contents over
/*
- size()
- capacity()
- empty()
- push_back(item)
- pop_back(n)
- pop_back()
- clear()
- [] for access and assignment (assuming that given the expression a[n] that n is in range)
*/
#include "funcs.h"

T &operator[](int i){
    return dynamicArray[i];
}

MyVector::MyVector(T datatype){
    dynamicArray = new T[10];
    dynamicArray[0] = datatype;
    maxSize = 10;
    currentSize = 0;
    //Make a empty array with a decent size and set that as the maxsize
}

int MyVector::size(){
    return cuurentSize;
}

int MyVector::capacity(){
    return maxSize;
}

bool MyVector::empty(){
    if(size == 0){
        return true;
    };
    return false;
}

void MyVector::push_back(T item){
    //add item to last slot of array
}

void MyVector::pop_back(int n){
    //deletes last n things in array
}

void MyVector::pop_back(){
    //delete last item in array
}

void MyVector::clear(){
    //deletes all the elements in the vector and returns a size of 0.
}