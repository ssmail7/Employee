//***************************************************************
// Written by Steven Smail for COP3331
//
// EmpDriver.cpp (Project 2)
//
// This program creates two employee objects, displays thier
// salaries with Accessor functions and then uses the mutator
// functions to update the value of their monthly salary.
//***************************************************************

#include <iostream>
#include "Employee.h"
using namespace std;

int main ()
{
  string newName;
  int newSalary;

  // Create two employee objects
  Employee number1("Nicole Watterson", 3500);
  Employee number2;

  cout << "\nEnter an employee name: ";
  getline(cin, newName);
  number2.setEmpName(newName);

  cout << "Enter the employee's monthly salary: ";
  cin >> newSalary;
  number2.setMonthlySalary(newSalary);

  cout << "\nHere are the employees and their yearly salaries\n";
  cout << number1.getEmpName() << ": $"
       << number1.getYearlySalary() << endl;
  cout << number2.getEmpName() << ": $"
       << number2.getYearlySalary() << endl;

  //Calculating Salaries after Raises
  number1.setMonthlySalary(number1.getMonthlySalary() +
  (number1.getMonthlySalary() * 0.10));
  number2.setMonthlySalary(number2.getMonthlySalary() +
  (number2.getMonthlySalary() * 0.10));

  cout << "\nHere are the employees and their yearly salaries"
       << " with a 10% raise\n";
  cout << number1.getEmpName() << ": $"
       << number1.getYearlySalary() << endl;
  cout << number2.getEmpName() << ": $"
       << number2.getYearlySalary() << endl;

}