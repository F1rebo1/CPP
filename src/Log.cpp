#include <iostream>
#include "../include/Log.h"

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

}