#include <string>
#include <iostream>
#include "roster.h"

// using namespace std;
using std::string;
using std::cout;
using std::endl;

int main() {

	cout << endl;
	cout << "Course Title: C867 Scripting & Programming - Applications" << endl;
	cout << "Language:     C++" << endl;
	cout << "Student ID:   010589169" << endl;
	cout << "Name:         Nicholas Gusto" << endl;
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;

	const string studentData[] =

	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Nicholas,Gusto,Ngusto@wgu.edu,31,15,25,35,SOFTWARE"
	};

	const int rosterMax = 5;
	Roster classRoster; // Not calling or defining a constructor - everything set to 0 provided by the compiler

	for (int i = 0; i < rosterMax; i++) classRoster.parse(studentData[i]);
	cout << endl;
	cout << "DISPLAY ALL STUDENTS: " << endl;
	cout << endl;
	classRoster.printAll();
	cout << endl;
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;

	cout << endl;
	cout << "DISPLAY ALL SOFTWARE STUDENTS: " << endl;
	cout << endl;
	classRoster.printByDegreeType(SOFTWARE);
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;

	cout << endl;
	cout << "DISPLAY ALL STUDENTS WITH INVALID EMAIL: " << endl;
	cout << endl;
	classRoster.printInvalidEmails();
	cout << endl;
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;

	cout << endl;
	cout << "DISPLAY AVERAGE DAYS TO COMPLETE COURSE: " << endl;
	cout << endl;
	for (int i = 0; i < rosterMax; i++)
	{
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	cout << endl;
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;

	cout << endl;
	cout << "Removing Student with ID A3" << endl;
	cout << endl;
	cout << endl;
	
	classRoster.printAll();
	if (classRoster.removeStudentByID("A3")) cout << "Student with ID of A3 removed" << endl;
	else cout << "Student A3 not found" << endl;
	cout << endl;
	cout << "_____________________________________________________________________________________________" << endl;
	cout << endl;
	

	/*cout << endl;
	cout << "CLASS ROSTER WITHOUT A3:" << endl;
	cout << endl;
	cout << "Removing Student with ID A3" << endl;
	cout << endl;
	if (classRoster.removeStudentByID("A3")) cout << "Student with ID of A3 removed" << endl;
	else cout << "Student A3 not found" << endl;*/

	// system("Pause"); // This holds the window and allows us to see the Destructor announcement when it's run
	return 0;
};

