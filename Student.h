#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int totalMark;
public:
	Student();
	Student(int totalMark);

	void changeMark(int value);
	int getTotalMark();

	// Does something with assignment and returns mark
	int doAssignment(string assignment);
	// Asks Student does he want try again
	bool tryAgain(int mark);
};

