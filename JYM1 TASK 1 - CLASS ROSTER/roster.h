#pragma once
#include <student.h>

using namespace std;

const string studentData[] =

{
	"A1, John, Smith, John1989@gm ail.com, 20, 30, 35, 40, SECURITY",
	"A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
	"A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
	"A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
	"A5, Nicholas, Gusto, Ngusto@wgu.edu, 31, 15, 25, 35, SOFTWARE"
};

class Roster {

public: 
	void add(string studentID, 
			string firstName, 
			string lastName,	
			string studentEmail, 
			int age, 
			int daysToComplete[], 
			degreeProgramEnum degreeProgram);

	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);

	Roster();
	~Roster();
};

