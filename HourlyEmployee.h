#ifndef HOURLYEMPLOYEE_h
#define HOURLYEMPLOYEE_h
#include <string>
#include <iostream>
using namespace std;

class HourlyEmployee : public Employee
{
    private:
        double m_hoursWorked;
        double m_hourlyWage;

    public:
        double getHoursWorked()
            { return m_hoursWorked; }
        double getHourlyWage()
            { return m_hourlyWage; }
        double calcPay() override
        {
            return m_hoursWorked * m_hourlyWage;
        }
        int getEmployeeId()
        {
            return 2;
        }
        void printCheck() override
        {   cout << "Name: " << m_name << endl;
            cout << "Address: " << m_address << endl;
            cout << "Number: " << m_number << endl;
            cout << "Total Salary: " << calcPay() << endl;

        }
        HourlyEmployee(double hoursWorked, double hourlyWage, string name, string number, string address):Employee(name, number, address) 
        {
            m_hoursWorked = hoursWorked;
            m_hourlyWage = hourlyWage;
        }
};

#endif