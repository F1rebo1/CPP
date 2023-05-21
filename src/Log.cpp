#include <iostream>
#include "../include/Log.h"

using namespace std;

struct Entity{
    int x, y;
    
    void Print(){
        cout << x << ", " << y << endl;
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

}