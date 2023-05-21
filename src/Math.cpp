#include <iostream>
#include "../include/Math.h"

#define LOG(x) cout << x << endl;

using namespace std;

void IncrementByPointer(int* value){
    (*value)++;
}

void IncrementByReference(int& value){
    value++;
}

class LogVals{
    public:
        char name[25];
        int x;
};

struct GroupVars{
    int y, z;
    private:
        int w;
};

int main(){
    // cout << "Enter your projected hourly salary: " << endl;
    // int hourlySalary;
    // cin >> hourlySalary;
    // cout << hourlySalary << endl;
    // long yearlySalary = convertHourlyToYearly(hourlySalary);
    // cout << "Your yearly salary is: " << endl;
    // cout << yearlySalary << endl;
    // cout << "Enter number of weeks you will work: " << endl;
    // int numWeeks;
    // cin >> numWeeks;
    // long salary = hourlyByWeeks(hourlySalary,numWeeks);
    // cout << salary << endl;

    int a = 5;
    IncrementByPointer(&a);
    LOG(a);
    IncrementByReference(a);
    LOG(a);
    
    // char name[25];
    // cin >> name;
    // cin.get();
    // cin.get(name, 5);
    // cout << name;

    return 0;
}