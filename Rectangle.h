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
      int getWidth();
      void setLength(int l);
      int getLength();
      int calcArea();
      void display();
};
