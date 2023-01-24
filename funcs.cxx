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
    currentSize++;
    dynamicArray[currentSize - 1] = item;
    if(currentSize == maxSize){
        //Copy contents on a temporary array
        T tempArray[maxSize];
        for(int i = 0; i < maxSize; i++){
            tempArray[i] = dynamicArray[i];
        }
        //Create new array and copy contents over
        dynamicArray = new T[maxSize * 2];
        for(int j = 0; j < maxSize; j++){
            dynamicArray[j] = tempArray[j];
        }
        maxSize = maxSize * 2;
    }
}

template <class T>
void MyVector<T>::pop_back(int n){
    //deletes last n things in array
    if(currentSize - n >= 0){
        currentSize = currentSize - n;
    }else{
        currentSize = 0;
    }
}

template <class T>
void MyVector<T>::pop_back(){
    //delete last item in array
    currentSize--;
}

template <class T>
void MyVector<T>::clear(){
    //deletes all the elements in the vector and returns a size of 0.
    currentSize = 0;
}