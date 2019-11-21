// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor,string Ming )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
   setInstructorMing(Ming);
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

/* write code to define a get member function for the instructor's name */
void GradeBook::setInstructorName( string instructor )
{
    instructorName=instructor;// store the course instruct
}// end function setCourseInstructor
/* write code to define a set member function for the instructor's name */
string GradeBook::getCourseInstructor()
{
    return instructorName;
}// end function getCourseInstructtor
// display a welcome message and the instructor's name
void GradeBook::setInstructorMing(string ming )
{
    instructorMing=ming;
}// end function setInstructorMing

string GradeBook::getInstructorMing()
{
    return instructorMing;
}// end function getCourseInstructorMing
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
   /* write code to output the instructor's name */
   cout<<"This course is presented by:"<<getCourseInstructor()<<" "<<getInstructorMing()<<"\n";
} // end function displayMessage
