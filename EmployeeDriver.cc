#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
using namespace std;


int main()
{
	SalariedEmployee employee_salaried(250.54, 8, "Priyanka", "4353453453", "434 Post Street, SF, CA");
	employee_salaried.printCheck();

	cout << endl;

	HourlyEmployee employee_hourly(25, 70.5, "Deepa", "8686585", "4323 Mirage Way, San Jose, CA");
	employee_hourly.printCheck();

	cout << endl;

	//polymorphism example
	Employee *ptr_employee = new HourlyEmployee(30, 70.5, "Elvis", "408768798", "Testing 123, SF, CA"); // showing polymorphism by using a base class pointer to create a dynamic derived class object
	cout << ptr_employee->getEmployeeId() << endl;
	ptr_employee->printCheck();

	return 0;
}
