#pragma once
#include <vector>
#include <string>
#include <iostream>

#include "roster.h"
#include "student.h"

// using namespace std;
using std::string;
using std::cout;
using std::endl;

void Roster::parse(string studentData)
{
	int rhs = studentData.find(","); // Finds the first comma
	string sID = studentData.substr(0, rhs); // This extracts everything in front of the comma for len 'rhs' - Student ID

	int lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	string sFirst = studentData.substr(lhs, rhs - lhs); // First Name

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	string sLast = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	string sEmail = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	int sAge = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	int sComplete1 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	int sComplete2 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1; // Moving right along
	rhs = studentData.find(",", lhs);
	int sComplete3 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1; // Degree Type
	rhs = studentData.find(",", lhs);

	DegreeProgram sDegree;

	if (studentData.at(lhs) == 'S' && studentData.at(lhs + 1) == 'O') sDegree = SOFTWARE;
	else if (studentData.at(lhs) == 'S' && studentData.at(lhs + 1) == 'E') sDegree = SECURITY;
	else if (studentData.at(lhs) == 'N') sDegree = NETWORK;

	add(sID, sFirst, sLast, sEmail, sAge, sComplete1, sComplete2, sComplete3, sDegree);
}

void Roster::add(string studentID, string firstName, string lastName, string studentEmail, int age, int sComplete1, int sComplete2, int sComplete3, DegreeProgram sDegree)
{
	int sArray[3] = { sComplete1, sComplete2, sComplete3 };

	classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, studentEmail, age, sArray, sDegree);
}

void Roster::printAll()
{
	Student::printHeader();
	for (int i = 0; i <= Roster::lastIndex; i++)
	{
		cout << classRosterArray[i]->getStudentID(); cout << '\t';
		cout << classRosterArray[i]->getFirstName(); cout << '\t';
		cout << classRosterArray[i]->getLastName(); cout << '\t';
		cout << classRosterArray[i]->getStudentEmail(); cout << '\t';
		cout << classRosterArray[i]->getAge(); cout << '\t';
		cout << classRosterArray[i]->getDaysToComplete()[0]; cout << ", ";
		cout << classRosterArray[i]->getDaysToComplete()[1]; cout << ", ";
		cout << classRosterArray[i]->getDaysToComplete()[2]; cout << '\t';
		cout << degreeTypeStrings[classRosterArray[i]->getDegreeProgram()] << endl;
	}
}

void Roster::printByDegreeType(DegreeProgram sDegree)
{
	Student::printHeader();
	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == sDegree) classRosterArray[i]->print();
	}
	cout << endl;
}

// Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails()
{
	bool any = false;
	for (int i = 0; i <= Roster::lastIndex; i++)
	{
		string sEmail = (classRosterArray[i]->getStudentEmail());
		if (sEmail.find('@') == string::npos || sEmail.find('.') == string::npos || sEmail.find(' ') != string::npos)
		{
			any = true;
			cout << sEmail << ":    " << classRosterArray[i]->getFirstName() << " " << classRosterArray[i]->getLastName() << endl;
		}
	}
	if (!any) cout << "No invalid emails." << endl;
}

void Roster::printAverageDaysInCourse(string sID)
{
	for (int i = 0; i <= Roster::lastIndex; i++)
	{
		if (classRosterArray[i]->getStudentID()==sID)
		{ 
			cout << sID << ": ";
			cout << (classRosterArray[i]->getDaysToComplete()[0] + classRosterArray[i]->getDaysToComplete()[1] + classRosterArray[i]->getDaysToComplete()[2]) / 3.0 << endl;
		}
	}
}

bool Roster::removeStudentByID(string studentID)
{
	bool success = false;
	for (int i = 0; i <= Roster::lastIndex; i++)
	{
		if (classRosterArray[i]->getStudentID() == studentID)
		{
			success = true;
			if (i < rosterMax - 1)
			{
				Student* temp = classRosterArray[i];
				classRosterArray[i] = classRosterArray[rosterMax - 1]; // Not copying any objects here - just assigning one pointer to another
				classRosterArray[rosterMax - 1] = temp; // The books aren't moving - only the pointers are - the books have switched places
			}
			Roster::lastIndex--; // Hides the last student because you're no longer able to get to it by decrementing lastIndex - you can only see those that are specified by lastIndex
		}
	}
	if (success)
	{
		cout << endl;
		cout << endl;
		cout << studentID << " removed from roster." << endl;
		cout << endl;
		cout << endl;
		this->printAll(); // The removed student(s) should NOT be displayed
		cout << endl;
		cout << endl;
	}
	else cout << studentID << " not found." << endl;
	return 0;
}


Roster::~Roster() // Gets rid of objects that are dynamically allocated - i.e. the Students
{
	cout << endl;
	cout << endl;
	cout << "*Destructor has entered the chat*" << endl << endl; // What you create, you must destroy. Clean up after yourself
	for (int i = 0; i < rosterMax; i++)
	{
		cout << "Destroying Student: " << i + 1 << endl;
		cout << "~RIP~" << endl;
		cout << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr; // This caps off the hole and removes the address it had before
	}


}



