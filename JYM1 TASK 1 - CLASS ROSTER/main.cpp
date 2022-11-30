#include <string>
#include <iostream>
#include <roster.h>

using namespace std;

int main() {

	cout << "Course Title: C867 Scripting & Programming - Applications" << endl;
	cout << "Language:     C++" << endl;
	cout << "Student ID:   010589169" << endl;
	cout << "Name:         Nicholas Gusto" << endl;

	const string studentData[] =

	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Nicholas,Gusto,Ngusto@wgu.edu,31,15,25,35,SOFTWARE"
	};

	Roster classRoster;

	classRoster.extractStudentData();
	classRoster.printAll();
	classRoster.printInvalidEmails();



};

