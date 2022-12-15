#include <iostream>
using namespace std;

int main(){
	int value = 7;
	int *ptr1 = &value;
	int *ptr2 = &value;
	
	if (ptr1==ptr2){
		cout<<"Pointers are Equal";
	}else{
		cout<<"Pointers are Not Equal";
	}
}