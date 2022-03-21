// Rectangle.h

class Rectangle {
   private:
      int length;
      int width;
   public:
      Rectangle(); // Default Constructor
      Rectangle(int l, int w); // Overloaded Constructor
      ~Rectangle(); // Destructor
      void setWidth(int w);
      void setLength(int l);
      int calcArea();
      void display();
};
