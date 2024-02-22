#pragma once
#include<iostream>
#include "Plant.h"
using namespace std;
class Flower :
    public Plant
{
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
    Flower(double height) : height(height), growthRate(0.5) {}
    void grow() override 
    {
        height += growthRate;
    }
    void displayHeight() const override
    {
        cout << "Flower height: " << height << " cm" << endl;
    }
};

    