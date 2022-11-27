#pragma once
#include <string>
#include <vector>
#include "degree.h"

using namespace std;

class Student {

public:
	
	const static int daysArraySize = 3;

private:

	string studentID, firstName, lastName, studentEmail;
	int age;
	int daysToComplete[daysArraySize];
	degreeProgramEnum degreeProgram;
	
public:

	// Let's access some functions!

	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getStudentEmail() const;
	int getAge() const;
	degreeProgramEnum getDegreeProgram() const;
	int getDaysToComplete() const;

	
	// Let's mutate some functions!

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setStudentEmail(string studentEmail);
	void setAge(int age);
	void setDegreeProgram(degreeProgramEnum degreeProgram);
	void setDaysToComplete(int daysToComplete[]);


	// Time for some construction!

	Student();
	Student(
		string studentID, string firstName, string lastName,
		string studentEmail, int age, int daysToComplete[],
		degreeProgramEnum degreeProgram);
	~Student();

	static void printHeader(); // displays a header for the data to follow

	void print(); // displays 'this' student's data

};