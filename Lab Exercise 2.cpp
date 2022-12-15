/*
	Name: 	Muhammad Arief Bin Mohd Rafie
	ID: 	SX210497ECJHS04
	Title:	Lab Exercise 2
	Date:	10 May 2022
*/

#include <iostream>
using namespace std;

int main () {
	//initial declaration
	char operation;
	double num1, num2, sum, sub, mult, div;
	int count =0;
	
	//get input operation from user
	cout << "Please enter operation\n (+) for addition\n (-) for subtraction\n (*) for multiplication\n (/) for division\n Operation :";
	cin >> operation;
	
	//perform Do...While Looping
	do{
		cout << endl;
		//get input for number 1
		cout << "Please enter number 1 :";
		cin >> num1;
		//get input for number 2
		cout << "Please enter number 2 :";
		cin >> num2;
		
		//perform switch case
		switch (operation){
			case '+':
				sum = num1 + num2;
				cout<< num1 << "  " << operation << " " << num2 << " = " << sum << endl;
			break;
			case '-':
				sub = num1 - num2;
				cout<< num1 << "  " << operation << " " << num2 << " = " << sub << endl;
			break;
			case '*':
				mult = num1 * num2;
				cout<< num1 << "  " << operation << " " << num2 << " = " << mult << endl;
			break;
			case '/':
				div = num1 / num2;
				cout<< num1 << "  " << operation << " " << num2 << " = " << div << endl;
			break;
			default :
         		cout << "Invalid Operator" << endl;
		}
		count++;
		cout << endl;
		//get input operation from user
		cout << "Please enter operation\n (+) for addition\n (-) for subtraction\n (*) for multiplication\n (/) for division\n (S) for STOP\n Operation :";
		cin >> operation;
	}while (operation != 's' && operation != 'S'); //end of Do...While Looping 
	return count;
}

