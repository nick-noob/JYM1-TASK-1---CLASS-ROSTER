#pragma once
#include <string>
#include <degree.h>
#include <vector>
using namespace std;

class Student {

private:

	string studentID, firstName, lastName, studentEmail;
	int age;
	int daysToComplete[3];
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
	void setDaysToComplete(int daysToComplete);


	// Time for some construction!

	Student(
		string studentID, string firstName, string lastName,
		string studentEmail, int age, int daysToComplete[],
		degreeProgramEnum degreeProgram);
	
	Student();
	~Student();

	virtual void print();

};