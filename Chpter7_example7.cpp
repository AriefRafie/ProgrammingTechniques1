#include <iostream>
using namespace std;

void swap(int *x, int *y)
{		int temp;
		temp = *x;
		*x = *y;
		*y = temp;
		cout<<"Temp: "<<temp<<"\n";
}


int main(){
int num1 = 2, num2 = -3;
swap(&num1, &num2);
cout<<"Num1: "<<num1<<"\n";
cout<<"Num2: "<<num2<<"\n";
}