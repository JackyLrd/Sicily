class Rectangle
{
  private:
    double width, height;
  public:
    Rectangle();
    Rectangle(double width, double height);
    double getWidth();
    double getHeight();
    void setWidth(double width);
    void setHeight(double height);
    double getArea();
    double getPerimeter();  
};
#include <iostream>
using namespace std;
Rectangle::Rectangle()
{
	width=1;
	height=1;
}
Rectangle::Rectangle(double width, double height)
{
	width=width;
	height=height;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
void Rectangle::setWidth(double width)
{
	width=width;
}
void Rectangle::setHeight(double height)
{
	height=height;
}
double Rectangle::getArea()
{
	return (width*height);
}
double Rectangle::getPerimeter()
{
	return (2*(width+height));
}  

