#pragma once
#include "student.h"

using namespace std;

class Roster 
{
public:

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

	bool removeStudentByID(string studentID);
};

