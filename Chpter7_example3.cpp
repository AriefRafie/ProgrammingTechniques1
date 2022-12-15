#include <iostream>
using namespace std;

int main(){
	int x=95; //int variable
	int *ptr; //pointer variable, can point to an int
	
	ptr = &x;	//store the address of x in ptr
	
	cout<<"Here is the value in x, printed twice: \n";
	cout<< x <<endl; //display the content of x
	cout<< *ptr <<endl; //display the content of x
	
	*ptr = 105;
	
	cout<<"Once again, here the value in x: \n";
	cout<< x <<endl; //display the content of x
	cout<< *ptr <<endl; //display the content of x
	return 0;
}