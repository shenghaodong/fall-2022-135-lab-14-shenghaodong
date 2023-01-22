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

template <class T>
T &MyVector<T>::operator[](int i){
    if(i > maxSize){
        //Copy the array to a new one that's bigger
    }
    return dynamicArray[i];
}

template <class T>
int MyVector<T>::size(){
    return currentSize;
    //Need a way to increase current size when user inputs something in the array
}

template <class T>
int MyVector<T>::capacity(){
    return maxSize;
}

template <class T>
bool MyVector<T>::empty(){
    if(currentSize == 0){
        return true;
    };
    return false;
}

template <class T>
void MyVector<T>::push_back(T item){
    //add item to last slot of array
}

template <class T>
void MyVector<T>::pop_back(int n){
    //deletes last n things in array
}

template <class T>
void MyVector<T>::pop_back(){
    //delete last item in array
}

template <class T>
void MyVector<T>::clear(){
    //deletes all the elements in the vector and returns a size of 0.
}