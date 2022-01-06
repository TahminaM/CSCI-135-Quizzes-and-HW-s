/******************************************************************************

 Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: HW 9.5
Description:-Implement a class Rectangle
-Provide a constructor to construct a rectangle with a given width and height, member functions get_perimeter and get_area that compute the perimeter and are
-A member function void resize(double factor) that resizes the rectangle by multiplying the width and height by the given factor


*******************************************************************************/
#include <iostream>
using namespace std;
class Rectangle
{
private:
double width;
double height;
public:
Rectangle(double w, double h)//constructor to construct rectangle with given width and height
{
width=w;
height=h;
}
double get_perimeter() //method to compute perimeter
{
return 2*(width+height);
}
double get_area() //method to return area of rectangle
{
return width*height;
}
void resize(double factor) //method to multiply width and height with factor given
{
width=width*factor;
height=height*factor;
}
  
};
int main()
{
Rectangle rect(10, 20);
cout << "Perimeter of Rectangle :" << rect.get_perimeter () << endl;
cout << "Area of Rectangle : " << rect.get_area () << endl;
rect.resize (2);
cout << "After resizing with factor 2 :" << endl;
cout<<"Perimeter of Rectangle :"<<rect.get_perimeter()<<endl;
cout<<"Area of Rectangle : "<<rect.get_area()<<endl;

return 0;
}

