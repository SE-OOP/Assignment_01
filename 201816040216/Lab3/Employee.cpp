// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string name,string ming,int money)
{
    setEmployeename(name);
    setEmployeeming(ming);
    setEmployeemoney(money);
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */
void Employee::setEmployeename(string name)
{
    Employeename=name;// store the Employee name
}//end function setEmployeename
/* Define a get function for the first name data member. */
string Employee::getEmployeename()
{
    return Employeename;
}//end function getEmployeename
/* Define a set function for the last name data member. */
void Employee::setEmployeeming(string ming)
{
    Employeeming=ming;// store the Employee ming
/* Define a get function for the last name data member. */

}
string Employee::getEmployeeming()
{
    return Employeeming;
}//end function getEmployeeming
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployeemoney(int money)
{
    Employeemoney=money;// store the Employee money
}//end function setEmployeemoney
/* Define a get function for the monthly salary data member. */
int Employee::getEmployeemoney()
{
    return Employeemoney;
}//end function getEmployeemoney
void Employee::displaymessage()
{
    cout<<getEmployeename()<<" "<<getEmployeeming()<<"; "<<"Yearly Salary:"<<getEmployeemoney()<<endl;
}//end function Employee displaymessage

int Employee::increasingmoney(int Employeemoney)
{
    Employeemoney1=Employeemoney*1.1;
    return Employeemoney1;
}//end function increasingmoney
void Employee::displaymessage1()
{
    cout<<getEmployeename()<<" "<<getEmployeeming()<<"; "<<"Yearly Salary:"<<Employeemoney1<<endl;
}


