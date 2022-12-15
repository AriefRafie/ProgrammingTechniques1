#include <iostream>
using namespace std;

int main(){
	int x=95; //int variable
	int *ptr; //pointer variable, can point to an int
	
	ptr = &x;	//store the address of x in ptr
	cout<<"The value in x is "<< x <<endl;
	cout<<"The address of x is= "<< ptr <<endl;
	
}