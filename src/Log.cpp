#include <iostream>
#include "../include/Log.h"
#include <array>

using namespace std;
using String = std::string;

class MyInterface{
    public:
        virtual String PrintClassname() = 0;
};

void Print(MyInterface* ptr){
    std::cout << ptr->PrintClassname() << std::endl;
}

class A : public MyInterface{
    public:
        String PrintClassname() override {
            return "We at A!";
        }
};

class Entity{
    private:
        String m_Name;
    public:
        int x, y;
    public:
        Entity() : m_Name("Unknown") {};
        
        void Print(){
            cout << x << ", " << y << endl;
        }

        void Pongal(Entity* e){
            cout << "This is an example of " << e->x << " pongal!" << endl;
        }
};

class Player : public Entity{
    public:
        void PrintName(const char* message){
            cout << "My name is " << message << endl;
        }

        void PrintPosition(){
            cout << "Position is: " << x << ", " << y << endl;
        }

        void Pongal(Entity* e){
            cout << "This is an example of " << e->x << " pongal!" << endl;
        }
};

// int Entity::x;
// int Entity::y;

int main(){
    
    Print(new A());

    int myArr[6];
    int size = sizeof(myArr) / sizeof((typeid(myArr).name()));
    int* myArrPtr = myArr;

    for(int j = 0; j < size; j++){
        myArr[j] = 6;
        std::cout << myArr[j] << std::endl;
        myArrPtr[j] = 9;
        std::cout << myArr[j] << std::endl;
    }

    *(myArrPtr + 3) = 5;
    std::cout << myArr[3] << std::endl;

    std::array<int,5> arr;
    for(int i = 0; i < arr.size(); i++){
        std::cout << "Hello!" << std::endl;
    }

    return 0;
}