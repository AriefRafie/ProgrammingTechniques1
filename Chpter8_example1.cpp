#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 25;

struct PayRoll{
	int empNum;
	char name [SIZE];
	double hours;
	double payRate;
	double grossPay;
};

int main(){
	PayRoll employee;
	
	cout<<"Enter the employee's' number: ";
	cin>>employee.empNum;
	
	cout<<"Enter the employee's' name: ";
	cin.ignore();
	cin.getline(employee.name,SIZE);
	
	cout<<"How many hours did the employee work: ";
	cin>>employee.hours;
	
	cout<<"What the employee hourly pay rate: ";
	cin>>employee.payRate;
	
	employee.grossPay = employee.hours * employee.payRate;
	
	cout<<"\nHere is the employee payroll data:\n";
	cout<<"Name: "<<employee.name<<endl;
	cout<<"ID: "<<employee.empNum<<endl;
	cout<<"Hour worked: "<<employee.hours<<endl;
	cout<<"Hourly payRate: "<<employee.payRate<<endl;
	cout<<fixed<<showpoint<<setprecision(2); //guna formating .00
	cout<<"Gross Pay: RM"<<employee.grossPay<<endl;
}
