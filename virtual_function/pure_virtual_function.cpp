#include <iostream>
using namespace std;
class area{
	public:
		double height;
		double width;
		double radius;
		virtual double Area() = 0;
		virtual ~area(){}
};
class triangle: public area
{
	public:
		triangle(double h, double w)
		{
			height = h;
			width = w;
		}
		double Area()
		{
			return 0.5 * height * width;
		}

};
class rectangle:public area
{
	public:
		rectangle(double h, double w)
		{
			height = h;
			width = w;
		}
		double Area()
		{
			return height * width;
		}

};
class circle:public area
{
	public:
		circle(double r)
		{
			radius = r;
		}
		double Area()
		{
			return 3.14159 * radius * radius;
		}

};
int main()
{
	class area *Triangle = new triangle(3.0,7.0); 
	class area *Rectangle = new rectangle(4.0,6.0); 
	class area *Circle = new circle(5.0);

	cout<<"Area of triangle : "<<Triangle->Area()<<endl;	
	cout<<"Area of rectangle : "<<Rectangle->Area()<<endl;	
	cout<<"Area of circle : "<<Circle->Area()<<endl;

	delete Triangle;	
	delete Rectangle;	
	delete Circle;

	return 0;
}
