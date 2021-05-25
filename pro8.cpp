#include<iostream>
#include<stdio.h>
using namespace std;
class shape     
{
	 int No_of_sides();
};
class TRAPEZOID: shape
{
	public :
	int No_of_sides()
	{
		cout<<"No. of sides in trapezoid is: 4 "<<endl;
        return 0;
	}
};
class TRIANGLE : shape
{
	public :
	int No_of_sides()
	{
		cout<<"No. of sides in triangle is: 3"<<endl;
        return 0;
	}
};
class HEXAGON : shape
{
	public : 
	int No_of_sides()
	{
		cout<<"No. of sides in hexagon is: 6"<<endl;
        return 0;
	}
};
int main()
{
	TRAPEZOID trapezoid;
	TRIANGLE triangle;
	HEXAGON hexagon;
	trapezoid.No_of_sides();
	triangle.No_of_sides();
	hexagon.No_of_sides();
}
