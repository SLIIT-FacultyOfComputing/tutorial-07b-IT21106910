#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
   // 3. Create a dynamic Circle type variable (pointer)
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
   // 5. Call the display method of the Rectangle Object
   // 6. Call the display method of the Circle Object
   // 7. Delete the Rectangle Object from memory
   // 8. Delete the Circle Object from memory
  //dynamic Rectangle
  Rectangle * r;
  r = new Rectangle();

  r-> setWidth(100);
  r-> setLength(50);
  cout << "Area of the Rectangle = " << r->calcArea() <<       endl;
  delete r;

  Circle * c;

  c = new Circle();

  c-> setRadius(7);
  cout << "Area of the Circle = " << c->calcArea() <<          endl;
  delete c;
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
