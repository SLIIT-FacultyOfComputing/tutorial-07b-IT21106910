
// Circle.h

class Circle {
   private:
      int radius;
   public:
      Circle(); // Default Constructor
      Circle(int r); // Overloaded Constructor
      ~Circle(); // Destructor
      void display();
      void setRadius(int r);
      float calcArea();
};
