#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class SalariedEmployee : public Employee
{
    private:
        double m_weeksWorked;
        double m_weeklyWage;
    public:
        double getWeeklyWage()
            { return m_weeklyWage; }
        double calcPay() override
        { return m_weeksWorked * m_weeklyWage; }
        void printCheck() override
        {   cout << "Name: " << m_name << endl;
            cout << "Address: " << m_address << endl;
            cout << "Number: " << m_number << endl;
            cout << "Total Salary: " << calcPay() << endl;

        }
        SalariedEmployee(double weeklyWage, double weeksWorked, string name, string number, string address):Employee(name, number, address) 
        {
            m_weeklyWage = weeklyWage;
            m_weeksWorked = weeksWorked;
        }
};

#endif