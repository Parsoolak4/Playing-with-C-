# Trinangle Program With C++ 

## 📌 Overview
This C++ program allows users to create a 3D triangle using three points and perform various operations, such as:
- Displaying the triangle's coordinates
- Moving individual points
- Translating the entire triangle
- Calculating the triangle's area

## 📂 Project Structure
📦 Project Folder ├── 📄 main.cpp # Entry point of the program ├── 📄 Point.cpp # Implementation of the Point class ├── 📄 Point.hpp # Header file for the Point class ├── 📄 Triangle.cpp # Implementation of the Triangle class ├── 📄 Triangle.hpp # Header file for the Triangle class └── 📄 README.md # Project documentation

shell
Copy
Edit

## 🛠️ Compilation & Execution
### **1️⃣ Compile the Program**
g++ -o main main.cpp Point.cpp Triangle.cpp
2️⃣ Run the Program
sh
Copy
Edit
./main
(For Windows, use .\main.exe)

📖 Usage Instructions
When the program starts, it prompts the user to enter the coordinates of three vertices. After that, a menu is displayed:

Show Triangle Coordinates - Displays the current coordinates of the triangle.
Move a Single Point - Moves one of the triangle's vertices along the X, Y, or Z axis.
Move Entire Triangle - Translates the whole triangle in a given direction.
Calculate Triangle Area - Computes and displays the area of the triangle.
Exit - Closes the program.

✨ Features
Supports 3D coordinate system.
Uses OOP principles (Point and Triangle classes).
Simple user-friendly interface.
Implements vector cross product for area calculation.

🔧 Future Improvements
Implement additional transformations (rotation, scaling).
Enhance error handling for invalid inputs.
Add a graphical visualization for better representation.🚀
