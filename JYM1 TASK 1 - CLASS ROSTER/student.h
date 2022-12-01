#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "degree.h"

// using namespace std;

using std::string;
using std::cout;
using std::endl;

class Student 
{

public:
	
	const static int daysArraySize = 3;

private:

	string studentID;
	string firstName;
	string lastName; 
	string studentEmail;
	int age;
	int daysToComplete[daysArraySize];
	DegreeProgram degreeProgram;
	
public:

	Student(); // Sets to default values
	Student(string studentID, string firstName, string lastName, string studentEmail, int age, int daysToComplete[], DegreeProgram degreeProgram); //Full constructor
	~Student(); // Destructor

	// Getters

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getStudentEmail();
	int getAge();
	int* getDaysToComplete();
	DegreeProgram getDegreeProgram();
	

	// Setters

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setStudentEmail(string studentEmail);
	void setAge(int age);
	void setDaysToComplete(int daysToComplete[]);
	void setDegreeProgram(DegreeProgram degreeProgram);
	

	static void printHeader(); // Displays a header for the data to follow

	void print(); // Displays 'this' student's data

};