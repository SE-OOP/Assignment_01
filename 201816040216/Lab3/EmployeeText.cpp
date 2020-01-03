// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int a=34500,b=37800;//set employee's yearly money

    Employee employee1("Bob","Jone",a);
    Employee employee2("Susan","Baker",b);
   /* Create two Employee objects and assign them to Employee variables. */
   cout<<"Employee1: ";
    employee1.displaymessage();
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee2: ";
    employee2.displaymessage();
   /* Give each Employee a 10% raise. */
   cout<<endl;
   cout<<"Increasing employee salaries by 10%"<<endl;
   cout<<"\n";

    employee1.increasingmoney(a);
    cout<<"Employee1: ";
   employee1.displaymessage1();
   employee2.increasingmoney(b);
   cout<<"Employee2: ";
   employee2.displaymessage1();
   /* Output the first name, last name and salary of each Employee again. */
} // end main


