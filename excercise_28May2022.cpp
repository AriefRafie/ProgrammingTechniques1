#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double area, radius;
	
	cout<<"This program can calculate the area of a circle.\n";
	cout<<"What is the radius of the circle? ";
	cin>>radius;
	area=3.14159 * pow (radius, 2.0);
	cout<<"The area is "<< area <<endl;
	system ("pause");
	return 0;
}