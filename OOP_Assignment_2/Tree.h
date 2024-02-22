#pragma once
#include<iostream>
using namespace std;
#include "Plant.h"
class Tree :
    public Plant
{
private:
    double height;
    double growthRate;
public:
    Tree(double height) : height(height), growthRate(0.2) {}
    void grow()
    {
        height += growthRate;
    }
    void displayHeight() const override
    {
        cout << "Tree height: " << height << " cm" << endl;
    }

};

