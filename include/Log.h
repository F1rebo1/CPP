#pragma once
#include <iostream>

// void Log(const char* message);

void Log(const char* message){
    std::cout << message << std::endl;
}

int LogMultiplyMessage(int a, int b){
    const char* text = "The result of the multiplication is: ";
    Log(text);
    return a * b;
}