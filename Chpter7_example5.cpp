#include <iostream>
using namespace std;

int main(){
	const int size = 8;
	int set[size] = {5,9,35,45,50,65,78,80};
	int *numPtr;
	int count;
	
	numPtr = set;
	
	cout<<"The number in the set are: \n";
	for(count = 0; count < size; count++){
		cout<< *numPtr << " ";
		numPtr++;
	}
	cout<<"\nThe number in set backward are: \n";
	for(count = 0; count < size; count++){
		numPtr--;
		cout<<*numPtr<<" ";
	}
}