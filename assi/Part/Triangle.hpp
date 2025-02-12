/*
    COMP 345 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Point.hpp"

class Triangle {
private:
    Point& vertex_1;
    Point& vertex_2;
    Point& vertex_3;

public:
    // Constructor: Accept references to existing points
    Triangle(Point& p1, Point& p2, Point& p3);

    // Move the Triangle
    void translate(int d, char axis);

    // Calculate the area
    double calcArea() const;

    // Display
    void display() const;
};

#endif
