#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Tests
TEST_CASE("Push Back"){
    MyVector<std::string> pushBack;
    pushBack.push_back("Hello");  
    pushBack.push_back("39");
    pushBack.push_back("Hunter"); 
    pushBack.push_back("Wow"); 
    CHECK(pushBack[0] == "Hello");
    CHECK(pushBack[1] == "39");
    CHECK(pushBack[2] == "Hunter");
    CHECK(pushBack[3] == "Wow");
}

TEST_CASE("Pop Back + Size and Capacity"){
    MyVector<int> deleteItems;
    for(int i = 0; i < 30; i++){
        deleteItems.push_back(i);
    }
    CHECK(deleteItems.capacity() == 40);
    deleteItems.pop_back();
    CHECK(deleteItems.size() == 29);
    deleteItems.pop_back(5);
    CHECK(deleteItems.size() == 24);
    deleteItems.pop_back(4);
    CHECK(deleteItems.size() == 20);
    deleteItems.pop_back(39);
    CHECK(deleteItems.size() == 0);
}

TEST_CASE("Clear and Empty"){
    MyVector<double> checkArray;
    CHECK(checkArray.empty() == true);
    for(int i = 0; i < 12; i++){
        checkArray.push_back(i);
    }
    CHECK(checkArray.empty() == false);
    checkArray.clear();
    CHECK(checkArray.empty() == true);
}