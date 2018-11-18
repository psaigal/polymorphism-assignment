#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee
{
    protected:
        string m_name;
        string m_address;
        string m_number;

    public:
        string getEmployeeNumber()
            { return m_number; }
        string getName()
            { return m_name; }
        string getAddress()
            { return m_address; }
        virtual int getEmployeeId()
        {
            return 1;
        }
        virtual double calcPay() = 0;
        virtual void printCheck() = 0;
        Employee(string name, string address, string number) 
        { 
            m_name = name;
            m_address = address;
            m_number = number;
        }
};

#endif