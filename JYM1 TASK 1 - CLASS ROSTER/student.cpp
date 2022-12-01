#include <string>
#include <iostream>
#include "student.h"

//using namespace std;
using std::string;
using std::cout;
using std::endl;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->studentEmail = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = 0;
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string studentEmail, int age, int daysToComplete[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->studentEmail = studentEmail;
	this->age = age;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = daysToComplete[i];
	this->degreeProgram = degreeProgram;
}

Student::~Student() {}

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getStudentEmail() { return this->studentEmail; }
int Student::getAge() { return this->age; }
int* Student::getDaysToComplete() { return this->daysToComplete; }
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
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

void Student::printHeader()
{
	cout << "StudentID | FirstName | LastName | Email | Age | DaysToCompleteClasses | Degree\n" << endl;
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

