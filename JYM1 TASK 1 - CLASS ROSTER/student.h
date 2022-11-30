#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "degree.h"

using namespace std;

class Student {

public:
	
	const static int daysArraySize = 3;

private:

	string studentID, firstName, lastName, studentEmail;
	int age;
	int daysToComplete[daysArraySize];
	DegreeProgram degreeProgram;
	
public:

	Student(); // Sets to default values
	Student(string studentID, string firstName, string lastName, string studentEmail, int age, int daysToComplete[], DegreeProgram degreeProgram); //Full constructor
	~Student(); // Destructor

	// Getters

	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getStudentEmail() const;
	int getAge() const;
	int* getDaysToComplete();
	DegreeProgram getDegreeProgram() const;
	

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