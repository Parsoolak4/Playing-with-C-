/*
    COMP 345 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#include "Triangle.hpp"
#include <iostream>
#include <cmath>


using namespace std;

Triangle::Triangle(Point& p1, Point& p2, Point& p3) 
    : vertex_1(p1), vertex_2(p2), vertex_3(p3) {}

void Triangle::translate(int d, char axis) {
    vertex_1.translate(d, axis);
    vertex_2.translate(d, axis);
    vertex_3.translate(d, axis);
}

void Triangle::display() const {
    cout << "Triangle:\n";
    cout << "Vertex 1: "; vertex_1.display(); cout << endl;
    cout << "Vertex 2: "; vertex_2.display(); cout << endl;
    cout << "Vertex 3: "; vertex_3.display(); cout << endl;
}

double Triangle::calcArea() const {
    double ABx = vertex_2.getX() - vertex_1.getX();
    double ABy = vertex_2.getY() - vertex_1.getY();
    double ABz = vertex_2.getZ() - vertex_1.getZ();
    double ACx = vertex_3.getX() - vertex_1.getX();
    double ACy = vertex_3.getY() - vertex_1.getY();
    double ACz = vertex_3.getZ() - vertex_1.getZ();
    double cross_x = ABy * ACz - ABz * ACy;
    double cross_y = ABz * ACx - ABx * ACz;
    double cross_z = ABx * ACy - ABy * ACx;
    double area = 0.5 * sqrt(cross_x * cross_x + cross_y * cross_y + cross_z * cross_z);
    
    return area;
}
