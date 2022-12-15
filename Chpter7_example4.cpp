#include <iostream>
using namespace std;

int main(){
	short numbers[] = {5,9,35,45,50};
	
	cout<<"The 1st element of the array is: ";
	cout<< *numbers <<endl;
	
	cout<<"The 2st element of the array is: ";
	cout<< numbers [1] <<endl;
	
	cout<<"The 3rd element of the array is: ";
	cout<< numbers [2] <<endl;
	
	cout<<"The 4th element of the array is: ";
	cout<< numbers [3] <<endl;
	
	cout<<"The last element of the array is: ";
	cout<< numbers [4] <<endl;
	
	return 0;
}