#pragma once
#include <iostream>

long convertHourlyToYearly(int hourly){
    return hourly * 8 * 5 * 52;
}

long hourlyByWeeks(int hourly, int numWeeks){
    return hourly * 8 * 5 * numWeeks;
}