// abstract class--->class with at least one pure virtual function
//can't create an object of an abstract class
//--->used to define a common interface for a group of related classes.
//---> It doesn't contain a class inside it; it's just a set of" rules "for the classes that will be built from it.

#include <iostream>
#include <string>

using namespace std;
class Shape{
                  virtual int calculateArea()=0;

                  virtual int calculatePerimeter()=0;

                  virtual int calculateSurfaceArea()=0;            
};

// derived class
class Square : public Shape{
    public:
    int side;

    Square(int i):side(i) {}

     int calculateArea() override{
         return side * side;
     }

     int calculatePerimeter() override{
             return 4 * side;
     }

     int calculateSurfaceArea() override{
            return 6*side * side ;}
};
int main(){
    Square square(4);
   cout << "Area of the square: " << square.calculateArea() <<endl;

    return 0;
}
