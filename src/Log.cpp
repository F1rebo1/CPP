#include <iostream>
#include "../include/Log.h"

using namespace std;

class Entity{
    public:
        int x, y;
        
        void Print(){
            cout << x << ", " << y << endl;
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
};

// int Entity::x;
// int Entity::y;

int main(){
    
    Entity e;
    e.x = 1;
    e.y = 2;

    Entity e1;
    e1.x = 6;
    e1.y = 9;

    e.Print();
    e1.Print();

    Player p1;
    p1.x = 20;
    p1.y = 5;
    p1.PrintName("Rohan");
    p1.PrintPosition();

}