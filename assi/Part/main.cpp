/*
    COMP 345 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#include <iostream>
#include "Triangle.hpp"

using namespace std;

void displayMenu() {
    cout << "\n=============================\n";
    cout << "      TRIANGLE PROGRAM       \n";
    cout << "=============================\n";
    cout << "1. Show Triangle Coordinates\n";
    cout << "2. Move a Single Point\n";
    cout << "3. Move Entire Triangle\n";
    cout << "4. Calculate Triangle Area\n";
    cout << "5. Exit\n";
    cout << "=============================\n";
    cout << "Select an option: ";
}

int main() {
    cout << "== Assignment 1 : Part 2 ==" << endl;

    // Get user input for triangle vertices
    int x, y, z;
    cout << "\nEnter coordinates for Vertex 1:\n";
    cout << "  x = "; cin >> x;
    cout << "  y = "; cin >> y;
    cout << "  z = "; cin >> z;
    Point p1(x, y, z);

    cout << "\nEnter coordinates for Vertex 2:\n";
    cout << "  x = "; cin >> x;
    cout << "  y = "; cin >> y;
    cout << "  z = "; cin >> z;
    Point p2(x, y, z);

    cout << "\nEnter coordinates for Vertex 3:\n";
    cout << "  x = "; cin >> x;
    cout << "  y = "; cin >> y;
    cout << "  z = "; cin >> z;
    Point p3(x, y, z);

    // Create a triangle using references
    Triangle triangle(p1, p2, p3);
    cout << "\nTriangle successfully created.\n";

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nCurrent Triangle Coordinates:\n";
                triangle.display();
                break;

            case 2: {
                int pointNumber, distance;
                char axis;

                cout << "\nWhich point do you want to move? (1, 2, or 3): ";
                cin >> pointNumber;

                if (pointNumber < 1 || pointNumber > 3) {
                    cout << "Invalid choice! Please enter 1, 2, or 3.\n";
                    break;
                }

                cout << "Enter movement distance: ";
                cin >> distance;
                cout << "Enter axis to move along (x, y, or z): ";
                cin >> axis;

                if (pointNumber == 1) p1.translate(distance, axis);
                else if (pointNumber == 2) p2.translate(distance, axis);
                else if (pointNumber == 3) p3.translate(distance, axis);

                cout << "Point moved successfully.\n";
                cout << "\nUpdated Triangle Coordinates:\n";
                triangle.display();
                break;
            }

            case 3: {
                int distance;
                char axis;

                cout << "\nEnter movement distance: ";
                cin >> distance;
                cout << "Enter axis to move along (x, y, or z): ";
                cin >> axis;

                triangle.translate(distance, axis);
                cout << "Triangle translated successfully.\n";
                cout << "\nUpdated Triangle Coordinates:\n";
                triangle.display();
                break;
            }

            case 4:
                cout << "\nThe area of the triangle is: " << triangle.calcArea() << " units²\n";
                break;

            case 5:
                cout << "\nExiting program... Thank you.\n";
                break;

            default:
                cout << "Invalid choice! Please select a valid option.\n";
        }
    } while (choice != 5);

    return 0;
}
