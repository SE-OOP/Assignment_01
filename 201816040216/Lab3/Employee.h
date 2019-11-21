// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string,string,int);
   /* Declare a set method for the employee's first name */
   void setEmployeename(string);
   /* Declare a get method for the employee's first name */
   string getEmployeename();
   /* Declare a set method for the employee's last name */
   void setEmployeeming(string);
   /* Declare a get method for the employee's last name */
   string getEmployeeming();
   /* Declare a set method for the employee's monthly salary */
   void setEmployeemoney(int);
   /* Declare a get method for the employee's monthly salary */
   int getEmployeemoney();
   void displaymessage();// display welcome message and instructor name
   void displaymessage1();
   int increasingmoney(int);
private:
   /* Declare a string data member for the employee's first name */
   string Employeename;
   /* Declare a string data member for the employee's last name */
   string Employeeming;
   /* Declare an int data member for the employee's monthly salary */
   int Employeemoney,Employeemoney1;
}; // end class Employee
