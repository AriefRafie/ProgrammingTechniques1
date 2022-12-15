#include <iostream>
#include <iomanip>
using namespace std;

enum Day {
MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};

int main(){
	const int NUM_DAY = 5;
	double sales[NUM_DAY];
	double total = 0.0;
	int index;
	
	for(index = MONDAY; index <= FRIDAY; index ++){
		cout<<"Enter the sales for day "<<index<<" : ";
		cin>>sales[index];
	}
	
	for (index = MONDAY; index <= FRIDAY; index ++){
		total += sales [index];
	}
	
	cout<<"The total sales are : RM"<<setprecision(2)<<fixed<<total<<endl;
}