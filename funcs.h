#pragma once
template <class T>

class MyVector{
    public:
        //MyVector(T datatype); //Makes a Vector
        int size();
        int capacity();
        bool empty();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear();
        T &operator[](int i);

    private:
        T *dynamicArray = new T[10];
        int currentSize = 0;
        int maxSize = 10;
};

#include "funcs.cxx"