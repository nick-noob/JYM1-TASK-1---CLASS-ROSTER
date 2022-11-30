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
	this->DegreeProgram = degreeProgram;
}

Student::Student(string studentID, string firstName, string lastName, string studentEmail, int age, daysToComplete[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->studentEmail = studentEmail;
	this->age = age;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = daysToComplete[i];
	this->DegreeProgram = degreeProgram;
}

Student::~Student() {}

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getStudentEmail() { return this->studentEmail; }
int Student::getAge() { return this->age; }
int Student::getDaysToComplete() { return this->daysToComplete; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setStudentEmail(string studentEmail) { this->studentEmail = studentEmail; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysToComplete(int daysToComplete[])
{
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = daysToComplete[i];
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->DegreeProgram = degreeProgram; }

void Student::printHeader()
{
	cout << "Output format: StudentID|FirstName|LastName|Age|DaysToCompleteClasses|Degree\n";
}

void Student::print()
{
	cout << this->getStudentID() << '\t';
	cout << this->getFirstName() << '\t';
	cout << this->getLastName() << '\t';
	cout << this->getStudentEmail() << '\t';
	cout << this->getAge() << '\t';
	cout << this->getDaysToComplete()[0] << ',';
	cout << this->getDaysToComplete()[1] << ',';
	cout << this->getDaysToComplete()[2] << '\t';
	cout << degreeTypeStrings[this->getDegreeProgram()] << '\n';
}

