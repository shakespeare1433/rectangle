/*
project name: Rectangle
author: Maryam M.k
date: 2nd october,2024.
*/
#include<iostream>
using namespace std;

class Rectangle
{
  
  public:
  	double length;
  	double width;
  	             
  	  public:           
  	             
  	double getArea()
  	{
  		return length * width;
	}
	double getPerimeter()
	{
		return 2*(length + width);
	}
	void display()
	{
	
	 	cout<<"the area of the rectagle is:"<<getArea()<<endl;
 	cout<<"the perimeter of the rectangle is:"<<getPerimeter()<<endl;
	}
	
  	
};
int main()
{

Rectangle rectangle1, rectangle2;

rectangle1.length=4;
rectangle1.width=2;

rectangle2.length=3;
rectangle2.width=3;

cout<<"rectangle 1:"<<endl;
rectangle2.display();

cout<<"rectangle 2:"<<endl;
rectangle2.display();

}


