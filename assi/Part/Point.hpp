
/*
    COMP 371 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#ifndef POINT_HPP
#define POINT_HPP

class Point {
private:
    int x, y, z;

public:
    Point();
    Point(int x, int y, int z);

 // Move the Point
    int translate(int d, char axis);

    // Display the Point
    void display() const;

   // Getters
    int getX() const;
    int getY() const;
    int getZ() const;

   // Destructor
    ~Point();
};

#endif
