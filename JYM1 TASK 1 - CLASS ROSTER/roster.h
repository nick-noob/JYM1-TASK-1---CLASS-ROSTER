#pragma once
#include "student.h"

using namespace std;

const string studentData[] =

{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Nicholas,Gusto,Ngusto@wgu.edu,31,15,25,35,SOFTWARE"
};


class Roster {

private:

	int lastIndex = -1;
	const static int rosterMax = 5;
	Student* classRosterArray[rosterMax];

public: 

	void parse(string row);
	
	void add(string sID, string sFirst, string sLast, string sEmail, int sAge, int sComplete1, int sComplete2, int sComplete3, DegreeProgram sDegree);

	void printAll();

	void printByDegreeType(DegreeProgram sDegree); // Degree Type is passed in

	void printInvalidEmails();

	void printAverageDaysInCourse(string studentID);

	void removeStudentByID(string studentID);

	~Roster();

};

