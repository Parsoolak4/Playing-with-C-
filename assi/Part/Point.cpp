/*
    COMP 345 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#include <iostream>
#include "Point.hpp"

using namespace std;

// Default constructor
Point::Point() : x(0), y(0), z(0) {}

// Parameterized constructor
Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

// Move the Point function
int Point::translate(int d, char axis) {
    switch (axis) {
        case 'x': x += d; return 0;
        case 'y': y += d; return 0;
        case 'z': z += d; return 0;
        default: return -1;  // Invalid axis
    }
}

// Display
void Point::display() const {
    cout << "(" << x << ", " << y << ", " << z << ")";
}

// Getters
int Point::getX() const { return x; }
int Point::getY() const { return y; }
int Point::getZ() const { return z; }

// Destructor
Point::~Point() {}
