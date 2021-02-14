//**************************************************************
// Written by Steven Smail for COP3331
//
// Employee.h (Project 2)
//
// This is the header containing the Employee class and member
// function definitions - including Constructors, Accessor
// functions, and Mutator functions.
//**************************************************************

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;

// Employee class declaration
class Employee
{
  private:
    string empName;
    int monthlySalary;
  public:
    // Constructors
    Employee()
    { empName = " ";
      monthlySalary = 0; }

    Employee(string name, int salary)
    { empName = name;
      monthlySalary = salary; }

    // Accessor functions
    string getEmpName() const
    { return empName; }

    int getMonthlySalary() const
    { return monthlySalary; }

    int getYearlySalary() const
    { return monthlySalary * 12; }

    // Mutator functions
    void setEmpName(string name)
    { empName = name; }

    void setMonthlySalary(int salary)
    { monthlySalary = salary; }
};

#endif
