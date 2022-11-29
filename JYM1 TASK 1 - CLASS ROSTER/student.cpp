#include <string>
#include <iostream>
#include "student.h"

using namespace std;

Student::Student()
{

	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->studentEmail = "";
	this->age = "";
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = 0;
	this->degreeProgramEnum = degreeProgram::UNDECIDED;
}

Student::Student(string studentID, string firstName, string lastName, string studentEmail, int age, daysToComplete[], degreeProgramEnum degreeProgram)
{



}